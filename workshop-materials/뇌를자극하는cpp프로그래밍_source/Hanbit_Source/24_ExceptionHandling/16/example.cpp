#include "dynamicarray.h"
#include "myexception.h"
#include <iostream>
using namespace std;

void A();

int main()
{
	try
	{
		// DynamicArray�� �����ڿ��� 
		// ���ܰ� �߻��ϵ��� �س��� ���´�.
		DynamicArray arr(100);
	}
	catch(MyException& ex)
	{
		cout << "���� ���� : " << ex.description << "\n";
	}

	return 0;	
}

