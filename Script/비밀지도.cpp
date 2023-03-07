#include <string>
#include <vector>
#include <iostream>

using namespace std;

string DecToBin(int n, int t) {
    string ans = "";
    while (n > 0) {
        if (n % 2 == 1) {
            ans = '#' + ans;
        }
        else { ans = ' ' + ans; }
        n /= 2;
    }
    while (ans.length() < t) {
        string tmp = ans;
        ans = " " + tmp;
    }
    return ans;
}

int main() {
    int n = 5;
    vector<int> arr1 = { 9, 20, 28, 18, 11 };
    vector<int> arr2 = { 30, 1, 21, 17, 28 };
    vector<string> answer;

    vector<string> encodeArr1;
    vector<string> encodeArr2;
    for (int i = 0; i < arr1.size(); i++) {
        encodeArr1.push_back(DecToBin(arr1[i], n));
        encodeArr2.push_back(DecToBin(arr2[i], n));
    }
    string tmp = "";
    for (int i = 0; i < encodeArr1.size(); i++) {
        for (int j = 0; j < encodeArr1.size(); j++) {
            if (encodeArr1.at(i)[j] == ' ' && encodeArr2.at(i)[j] == ' ') {
                tmp = tmp + ' ';
            }
            else {
                tmp = tmp + '#';
            }
        }
        answer.push_back(tmp);
        tmp = "";
    }

    for (int i = 0; i < n; i++) {
        cout << answer.at(i) << '\n';
    }
}
