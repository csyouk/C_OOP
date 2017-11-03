#include <iostream>
using namespace std;

void ForWindows9x();
void ForWindowsNT();
bool  IsWindows9x();
void ImportantFunc();

int main()
{
	// 아주 중요한 함수를 호출한다.
	ImportantFunc();

	return 0;
}

// Windows 95/98/Me 용 함수
void ForWindows9x()
{
	cout << "Windows 9x 용 함수가 호출됨\n";
}

// Windows NT/2000/XP 용 함수
void ForWindowsNT()
{
	cout << "Windows NT/2000/XP 용 함수가 호출됨\n";
}

// 현재 실행되는 환경을 Windows 9x 인지 반환하는 함수
bool  IsWindows9x()
{
	// 임의로 false를 반환하도록 해두었다.
	return false;
}

// 바로 그, 아주 중요한 함수
void ImportantFunc()
{
	// 버전에 맞는 함수를 호출한다.
	if (IsWindows9x())
		ForWindows9x();
	else
		ForWindowsNT();

	// 중간 생략

	// 다시 한 번 버전에 맞는 함수를 호출한다.
	if (IsWindows9x())
		ForWindows9x();
	else
		ForWindowsNT();
}
