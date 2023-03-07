//-------------------------------------------------------------------------
// save.cpp �� �б� ���Ǹ� �����Ѵ�.
//-------------------------------------------------------------------------
#include <string>
#include <fstream>
#include <chrono>
#include "save.h"

void save(const std::string& fileName)
{
	//fileName�� �б� ���� ����
	std::ifstream in{ fileName };

	//char c;
	//in >> std::noskipws; //����, ���� ��ŵ���� ����
	//while (in >> c) {
	//	std::cout << c;
	//}

	//���� ������ ���ٿ� ���� ���� ����
	std::ofstream out{ "2023 1�б� STL ���� ���� ����.txt", std::ios::app };

	//���� �ð��� ���Ͽ� ����Ѵ�.
	auto now = std::chrono::system_clock::now();			//time_point
	//using namespace std::literals::chrono_literals;
	//std::cout << "���� �ð� - " << now + 9h << '\n';

	auto utc = std::chrono::system_clock::to_time_t(now);	//UTC �ð����� ��ȯ
	auto lt = localtime(&utc);								//���� �ð����� ��ȯ
	auto old = out.imbue(std::locale("KO_kr"));				//��Ķ ��ȯ



	//�ѱ� �������� ��¥ ���
	out << '\n' << '\n';
	out << "==================================" << '\n';
	out << fileName << std::put_time(lt, ", ���� �ð�: %x %A %X") << '\n';
	out << "==================================" << '\n';


	std::cout.imbue(old);									//��Ķ ����

	//fileName�� �ִ� ��� ������ �о� ������ ���Ͽ� ����
	//STL�� �ڷᱸ���� �˰����� �̿��Ͽ� �����ϱ�

	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };
	//std::vector<char> v{ ������ ����, ������ �� };
	std::copy(v.begin(), v.end(), std::ostream_iterator<char>{out});

	//in.close() ���� �ʾƵ� ��. �˾Ƽ� �Ҹ��ڸ� �θ��� ���� >> RAII. *****���� ��Ʈ�� ���� ���ϱ�*****
}