#include "dynamicarray.h"

DynamicArray::DynamicArray(int arraySize)
{
	// �������� �޸𸮸� �Ҵ��Ѵ�.
	arr = new int [arraySize];

	// �迭�� ���� ����
	size = arraySize;
}

DynamicArray::~DynamicArray()
{
	// �޸𸮸� �����Ѵ�.
	delete[] arr;
	arr = 0;
}

// ������ ���� �ٲ۴�
void DynamicArray::SetAt(int index, int value)
{
	arr[index] = value;
}

// ������ ���� ��ȯ�Ѵ�
int DynamicArray::GetAt(int index) const
{
	return arr[index];
}

// �迭�� ���̸� ��ȯ�Ѵ�.
int DynamicArray::GetSize() const
{
	return size;
}
