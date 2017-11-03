#include <iostream>
using namespace std;

// ForWindows9x()나 ForWindowsNT()를 가리킬 수 있는
// 포인터 타입의 정의하자.
typedef void (*SYSTEM_FUNC)();

void ForWindows9x();
void ForWindowsNT();
bool  IsWindows9x();
void ImportantFunc(SYSTEM_FUNC pfnSyst);


int main()
{
	// 함수의 포인터 변수를 정의한다.
	SYSTEM_FUNC pfn;

	// 시스템의 버전에 따라서 알맞은 함수를
	// 가리키도록 만든다.
	if (IsWindows9x())
		pfn = &ForWindows9x;
	else
		pfn = &ForWindowsNT;

	// 아주 중요한 함수를 호출한다.
	ImportantFunc(pfn);

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
// 호출해야될 함수의 포인터를 인자로 받는다.
void ImportantFunc(SYSTEM_FUNC pfnSyst)
{
	// 버전에 맞는 함수를 호출한다.
	(*pfnSyst)();

	// 중간 생략

	// 다시 한 번 버전에 맞는 함수를 호출한다.
	(*pfnSyst)();
}
