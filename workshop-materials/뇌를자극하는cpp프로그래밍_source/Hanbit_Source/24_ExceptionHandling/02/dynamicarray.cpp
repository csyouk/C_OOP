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
// �ε����� ������ �߸��� ��� false ��ȯ
bool DynamicArray::SetAt(int index, int value)
{
	// �ε����� Ȯ���Ѵ�.
	if (index < 0 || index >= GetSize() )
		return false;


	arr[index] = value;

	return true;
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
