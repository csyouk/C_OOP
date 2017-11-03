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
		cout << "MemoryException 타입으로 잡혔음\n";
	}
	catch(OutOfRangeException& ex)
	{
		cout << "OutOfRangeException 타입으로 잡혔음\n";
	}
	catch(...)
	{
		cout << "그 밖의 타입\n";
	}

	return 0;
}

void A()
{
	// throw 100;
	throw OutOfRangeException(NULL, 0);
}