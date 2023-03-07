//-------------------------------------------------------------------------
// save.cpp 한 학기 강의를 저장한다.
//-------------------------------------------------------------------------
#include <string>
#include <fstream>
#include <chrono>
#include "save.h"

void save(const std::string& fileName)
{
	//fileName을 읽기 모드로 열기
	std::ifstream in{ fileName };

	//char c;
	//in >> std::noskipws; //공백, 엔터 스킵하지 마라
	//while (in >> c) {
	//	std::cout << c;
	//}

	//저장 파일을 덧붙여 쓰기 모드로 열기
	std::ofstream out{ "2023 1학기 STL 강의 저장 파일.txt", std::ios::app };

	//저장 시간을 파일에 기록한다.
	auto now = std::chrono::system_clock::now();			//time_point
	//using namespace std::literals::chrono_literals;
	//std::cout << "현재 시간 - " << now + 9h << '\n';

	auto utc = std::chrono::system_clock::to_time_t(now);	//UTC 시간으로 변환
	auto lt = localtime(&utc);								//로컬 시간으로 변환
	auto old = out.imbue(std::locale("KO_kr"));				//로캘 변환



	//한국 형식으로 날짜 출력
	out << '\n' << '\n';
	out << "==================================" << '\n';
	out << fileName << std::put_time(lt, ", 저장 시간: %x %A %X") << '\n';
	out << "==================================" << '\n';


	std::cout.imbue(old);									//로캘 복구

	//fileName에 있는 모든 내용을 읽어 저장할 파일에 쓰기
	//STL의 자료구조와 알고리즘을 이용하여 저장하기

	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };
	//std::vector<char> v{ 파일의 시작, 파일의 끝 };
	std::copy(v.begin(), v.end(), std::ostream_iterator<char>{out});

	//in.close() 쓰지 않아도 됨. 알아서 소멸자를 부르기 때문 >> RAII. *****파일 스트림 공부 더하기*****
}