#include <iostream>
using namespace std;

// 스마트 포인터 클래스
class SmartPointer
{
public:
	SmartPointer(char* p)
		: ptr(p) 
	{
	}
	~SmartPointer()
	{
		// 소멸자가 호출되는 것을 확인한다
		cout << "메모리가 해제된다!!\n";

		delete[] ptr;
	}

public:
	char * const ptr;
};


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

	// 메모리를 스마트 포인터에 보관한다.
	SmartPointer sp(p);

	// 여기까지 실행되었음을 출력한다.
	cout << "예외가 발생하기 전\n";

	// 예외를 던지는 함수 호출
	B();

	// 이곳은 실행되지 않음을 출력한다.
	cout << "예외가 발생한 후\n";

	// 메모리를 따로 해제해 줄 필요가 없다
	//	delete[] p;
	//	p = NULL;
}

void B()
{
	throw "Exception!!";
}