//-----------------------------------------------------------------------------
// 2023 1학기 STL 3월 7일 목78                화 910 목78               (2주 1일)
//-----------------------------------------------------------------------------
// 많은 수의 자료 다루기 - int
//-----------------------------------------------------------------------------
// 코딩 컨벤션 >> 코딩 규칙이 있음.
//-----------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <format>
#include <array>
#include <algorithm>
#include "save.h"
using namespace std; //권장하지 않음.

array<int, 10>ga{12};
array<int, 10>gga{};
// 초기화 한 전역 변수와 초기화하지 않은 전역 변수는 완전히 다름.
// 저장 위치부터 다름.
int gn;
// 전역 변수니까 스택 메모리에 위치 Xx
// data 영역에 있음.
//-------------
int main() 
//-------------
{
	array<int, 10> a;
	int n;
	int* p = new int;


	cout << "스택에 있는 a[0] -    " << addressof(a[0]) << endl;
	cout << "스택에 있는 n -       " << addressof(n) << endl;
	cout << endl;
	cout << "free store에 있는 p - " << p << endl;
	cout << endl;
	cout << "data에 있는 ga -      " << addressof(ga[0]) << endl;
	cout << "data에 있는 gn -      " << addressof(gn) << endl;
	cout << endl;
	cout << "코드에 있는 main -    " << addressof(main) << endl;
	cout << "코드에 있는 save -    " << addressof(save) << endl;

	save("소스.cpp");
}

// array<int, 1000> a;
// ㄴ 스택에 생김. 지역 변수니까!
// 
//