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

    //1�ܰ�_�빮���� �ҹ��� ġȯ
    for (int i = 0; i < new_id.size(); i++) {
        tmp.push_back(tolower(new_id[i]));
    }
    //2�ܰ�_���ĺ� �ҹ���, ����, ����, ����, ��ħǥ ���� ��� ���� ����
    //3�ܰ�_��ħǥ �� �� ������ �κ��� �ϳ��� ��ħǥ�� ġȯ
    for (int i = 0; i < tmp.size(); i++) {
        cout << tmp[i] << " " << i << " " << tmp.size() << '\n';
        if ('a' > tmp[i] || tmp[i] > 'z') { //�ҹ��� ����
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
    //5�ܰ�_new_id�� �� ���ڿ��̶�� new_id�� "a"����
    if (tmp.empty()) { tmp.push_back('a'); }
    //4�ܰ�_��ħǥ�� ó���̳� ���� ��ġ�Ѵٸ� ����
    if (tmp.front() == '.') { tmp.erase(tmp.begin()); }


    //6�ܰ�_new_id�� ���̰� 16�� �̻��̸� 16���� ��� ���� �� ��ħǥ�� ���̸� �׶��� ����
    while (tmp.size() > 15) {
        tmp.pop_back();
    }
    if (tmp.empty()) { tmp.push_back('a'); }

    if (tmp.back() == '.') { tmp.pop_back(); }

    //7�ܰ�_new_id�� ���̰� 2�� ���϶�� new_id�� ������ ���ڸ� new_id�� ���̰� 3�� �� ������ �ݺ�
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