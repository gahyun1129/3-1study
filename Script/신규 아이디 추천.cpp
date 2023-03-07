#include <string>
#include <vector>
#include <cctype>
#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string new_id;
    cin >> new_id;

    string answer = "";

    vector<char> tmp;

    //1단계_대문자의 소문자 치환
    for (int i = 0; i < new_id.size(); i++) {
        tmp.push_back(tolower(new_id[i]));
    }
    //2단계_알파벳 소문자, 숫자, 빼기, 밑줄, 마침표 제외 모든 문자 제거
    //3단계_마침표 두 번 연속인 부분을 하나의 마침표로 치환
    for (int i = 0; i < tmp.size(); i++) {
        cout << tmp[i] << " " << i << " " << tmp.size() << '\n';
        if ('a' > tmp[i] || tmp[i] > 'z') { //소문자 제외
            if (tmp[i] != '.' && tmp[i] != '-' && tmp[i] != '_') {
                if (tmp[i] < '0' || tmp[i] > '9') {
                    tmp.erase(tmp.begin() + i);
                    i--;
                }
            }
            if ((i + 1) < tmp.size() && i >= 0 && tmp[i] == '.' && tmp[i + 1] == '.') {
                //cout << tmp[i] << " " << i << '\n';
                tmp.erase(tmp.begin() + i);
                i--;
            }
        }
    }
    //5단계_new_id가 빈 문자열이라면 new_id에 "a"대입
    if (tmp.empty()) { tmp.push_back('a'); }
    //4단계_마침표가 처음이나 끝에 위치한다면 제거
    if (tmp.front() == '.') { tmp.erase(tmp.begin()); }


    //6단계_new_id의 길이가 16자 이상이면 16이후 모두 제거 후 마침표가 끝이면 그또한 제거
    while (tmp.size() > 15) {
        tmp.pop_back();
    }
    if (tmp.empty()) { tmp.push_back('a'); }

    if (tmp.back() == '.') { tmp.pop_back(); }

    //7단계_new_id의 길이가 2자 이하라면 new_id의 마지막 문자를 new_id의 길이가 3이 될 때까지 반복
    while (tmp.size() < 3) {
        tmp.push_back(tmp.back());
    }

    stringstream ss;
    for (int i = 0; i < tmp.size(); i++) {
        ss << tmp[i];
    }

    answer = ss.str();
    std::cout << answer;
}