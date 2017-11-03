#include <iostream>
using namespace std;

void Dog()
{
	cout << "I'm a dog.\n";
}

void Cat()
{
	cout << "I'm a cat.\n";
}

int main()
{
	// 함수의 포인터를 정의한다.
	void (*p)();

	// Dog() 함수를 가리키게 한 후에 호출한다.
	p = &Dog;
	(*p)();

	// Cat() 함수를 가리키게 한 후에 호출한다.
	p = &Cat;
	(*p)();
	
	return 0;
}
