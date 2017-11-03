#include <iostream>
using namespace std;

void A();
void B();

int main()
{
	try
	{
		A();
	}
	catch(const char* ex)
	{
		cout << "예외 잡음 : " << ex << "\n";
	}

	return 0;
}

void A()
{
		// 메모리를 할당한다.
	char* p = new char [100];

	// 여기까지 실행되었음을 출력한다.
	cout << "예외가 발생하기 전\n";

	// 예외를 던지는 함수 호출
	B();

	// 이곳은 실행되지 않음을 출력한다.
	cout << "예외가 발생한 후\n";

	// 메모리를 해제한다. (실행 안됨)
	delete[] p;
	p = NULL;
}

void B()
{
	throw "Exception!!";
}