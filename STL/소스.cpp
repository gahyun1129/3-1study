//-----------------------------------------------------------------------------
// 2023 1�б� STL 3�� 7�� ��78                ȭ 910 ��78               (2�� 1��)
//-----------------------------------------------------------------------------
// ���� ���� �ڷ� �ٷ�� - int
//-----------------------------------------------------------------------------
// �ڵ� ������ >> �ڵ� ��Ģ�� ����.
//-----------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <format>
#include <array>
#include <algorithm>
#include "save.h"
using namespace std; //�������� ����.

array<int, 10>ga{12};
array<int, 10>gga{};
// �ʱ�ȭ �� ���� ������ �ʱ�ȭ���� ���� ���� ������ ������ �ٸ�.
// ���� ��ġ���� �ٸ�.
int gn;
// ���� �����ϱ� ���� �޸𸮿� ��ġ Xx
// data ������ ����.
//-------------
int main() 
//-------------
{
	array<int, 10> a;
	int n;
	int* p = new int;


	cout << "���ÿ� �ִ� a[0] -    " << addressof(a[0]) << endl;
	cout << "���ÿ� �ִ� n -       " << addressof(n) << endl;
	cout << endl;
	cout << "free store�� �ִ� p - " << p << endl;
	cout << endl;
	cout << "data�� �ִ� ga -      " << addressof(ga[0]) << endl;
	cout << "data�� �ִ� gn -      " << addressof(gn) << endl;
	cout << endl;
	cout << "�ڵ忡 �ִ� main -    " << addressof(main) << endl;
	cout << "�ڵ忡 �ִ� save -    " << addressof(save) << endl;

	save("�ҽ�.cpp");
}

// array<int, 1000> a;
// �� ���ÿ� ����. ���� �����ϱ�!
// 
//