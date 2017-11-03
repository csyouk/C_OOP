#include "dynamicarray.h"
#include "myexception.h"
#include <iostream>
using namespace std;

void UseMemory();
void UseArray(DynamicArray& arr1, DynamicArray& arr2);

int main()
{
	// �迭 ��ü�� 2�� �����.
	DynamicArray arr1(10);
	DynamicArray arr2(8);

	UseArray(arr1, arr2);

	return 0;	
}

void UseMemory()
{
	// 1000 ����Ʈ�� �Ҵ��Ϸ��� �����ߴٰ� ����
	throw MemoryException( NULL, 1000);
}

void UseArray(DynamicArray& arr1, DynamicArray& arr2)
{
	try
	{
		arr1.SetAt(5, 100);
		arr2.SetAt(5, 100);

		UseMemory();

		arr1.SetAt(8, 100);
		arr2.SetAt(8, 100);
	}
	catch(MyException& ex)
	{
		// OutOfRangeException �� MemoryException ��� 
		// ���⼭ ���� �� �ִ�.
		cout << "���ܿ� ���� ����= " << ex.description << "\n";
	}
}
