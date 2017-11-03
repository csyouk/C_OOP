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
		cout << "main() 함수에서 잡은 예외 = " << c << "\n";
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
		cout << "A() 함수에서 잡은 예외 = " << c << "\n";

		throw;
	}
}

void B()
{
	throw 'X';
}
