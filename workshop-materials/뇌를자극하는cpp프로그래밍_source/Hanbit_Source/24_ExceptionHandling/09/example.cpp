#include "myexception.h"
#include <iostream>
using namespace std;

void A();

int main()
{
	try
	{
		A();
	}
	catch(MemoryException& ex)
	{
		cout << "MemoryException Ÿ������ ������\n";
	}
	catch(OutOfRangeException& ex)
	{
		cout << "OutOfRangeException Ÿ������ ������\n";
	}
	catch(...)
	{
		cout << "�� ���� Ÿ��\n";
	}

	return 0;
}

void A()
{
	// throw 100;
	throw OutOfRangeException(NULL, 0);
}