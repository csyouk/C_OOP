#include "dynamicarray.h"
#include "myexception.h"
#include <iostream>
using namespace std;

DynamicArray::DynamicArray(int arraySize)
{
	// �������� �޸𸮸� �Ҵ��Ѵ�.
	arr = new int [arraySize];

	// �迭�� ���� ����
	size = arraySize;

	// ���⼭ ���Ƿ� ���ܸ� �߻���Ų��.
	throw MemoryException( this, 0);
}

DynamicArray::~DynamicArray()
{
	// �Ҹ��ڰ� ������� ������ Ȯ���Ѵ�
	cout << "����� �Ҹ��ڴ�!!\n"; 

	// �޸𸮸� �����Ѵ�.
	delete[] arr;
	arr = 0;
}

// ������ ���� �ٲ۴�
void DynamicArray::SetAt(int index, int value)
{
	// �ε����� ������ ���� ������ ���ܸ� ������
	if (index < 0 || index >= GetSize())
		throw MyException( this, "Out of Range!!!", index);

	arr[index] = value;
}

// ������ ���� ��ȯ�Ѵ�
int DynamicArray::GetAt(int index) const
{
	// �ε����� ������ ���� ������ ���ܸ� ������
	if (index < 0 || index >= GetSize())
		throw MyException( this, "Out of Range!!!", index);

	return arr[index];
}

// �迭�� ���̸� ��ȯ�Ѵ�.
int DynamicArray::GetSize() const
{
	return size;
}
