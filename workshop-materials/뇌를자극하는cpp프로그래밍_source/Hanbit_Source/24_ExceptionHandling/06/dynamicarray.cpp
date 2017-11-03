#include "dynamicarray.h"
#include "myexception.h"

DynamicArray::DynamicArray(int arraySize)
{
	// 동적으로 메모리를 할당한다.
	arr = new int [arraySize];

	// 배열의 길이 보관
	size = arraySize;
}

DynamicArray::~DynamicArray()
{
	// 메모리를 해제한다.
	delete[] arr;
	arr = 0;
}

// 원소의 값을 바꾼다
void DynamicArray::SetAt(int index, int value)
{
	// 인덱스의 범위가 맞지 않으면 예외를 던진다
	if (index < 0 || index >= GetSize())
		throw OutOfRangeException(this, index);

	arr[index] = value;
}

// 원소의 값을 반환한다
int DynamicArray::GetAt(int index) const
{
	// 인덱스의 범위가 맞지 않으면 예외를 던진다
	if (index < 0 || index >= GetSize())
		throw OutOfRangeException(this, index);

	return arr[index];
}

// 배열의 길이를 반환한다.
int DynamicArray::GetSize() const
{
	return size;
}
