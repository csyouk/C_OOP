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
	// �Լ��� �����͸� �����Ѵ�.
	void (*p)();

	// Dog() �Լ��� ����Ű�� �� �Ŀ� ȣ���Ѵ�.
	p = &Dog;
	(*p)();

	// Cat() �Լ��� ����Ű�� �� �Ŀ� ȣ���Ѵ�.
	p = &Cat;
	(*p)();
	
	return 0;
}
