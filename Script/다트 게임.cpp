#include <string>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    string dartResult = "1S*2T*3S";
    vector<int>num;
    vector<char>option;
    int answer = 0;
    int tmp = 0;
    for (int i = 0; i < dartResult.size(); i++) {
        if (dartResult[i] >= '0' && dartResult[i] <= '9') {
            if (dartResult[i] == '1' && dartResult[i + 1] == '0') {
                tmp = 10;
                i++;
            }
            else {
                tmp = dartResult[i] - 48;
                i++;
            }
        }
        if (dartResult[i] == 'S') {
            num.push_back(pow(tmp, 1));
            tmp = 0;
        }
        else if (dartResult[i] == 'D') {
            num.push_back(pow(tmp, 2));
            tmp = 0;
        }
        else if (dartResult[i] == 'T') {
            num.push_back(pow(tmp, 3));
            tmp = 0;
        }
        if (i < dartResult.size() && (dartResult[i + 1] == '*' || dartResult[i + 1] == '#')) {
            option.push_back(dartResult[i + 1]);
            i++;
        }
        else {
            option.push_back('X');
        }
    }

    for (int i = 0; i < option.size(); i++) {
        if (option.at(i) == '#') {
            num[i] = -num[i];
        }
        if (option.at(i) == '*') {
            if (i > 0) {
                num[i - 1] = num[i - 1] * 2;
            }
            num[i] = num[i] * 2;
        }
    }

    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << '\n';
        cout << option[i] << '\n';
        answer += num[i];
    }
    cout << answer;
}