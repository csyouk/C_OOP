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
	catch(char c)
	{
		cout << "main() �Լ����� ���� ���� = " << c << "\n";
	}

	return 0;
}

void A()
{
	try
	{
		B();
	}
	catch(char c)
	{
		cout << "A() �Լ����� ���� ���� = " << c << "\n";

		throw;
	}
}

void B()
{
	throw 'X';
}
