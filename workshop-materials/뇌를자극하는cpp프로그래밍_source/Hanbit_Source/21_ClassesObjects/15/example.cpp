#include <iostream>
using namespace std;

class DynamicArray
{
public:
	int* arr;

	DynamicArray(int arraySize);
	~DynamicArray();
};

DynamicArray::DynamicArray(int arraySize)
{
	// 동적으로 메모리를 할당한다.
	arr = new int [arraySize];
}

DynamicArray::~DynamicArray()
{
	// 메모리를 해제한다.
	delete[] arr;
	arr = NULL;
}

int main()
{
	// 몇 개의 정수를 입력할지 물어본다.
	int size;
	cout << "몇 개의 정수를 입력하시겠소? ";
	cin >> size;

	// 필요한 만큼의 메모리를 준비한다.
	DynamicArray da(size);

	// 정수를 입력 받는다.
	for (int i = 0; i < size; ++i)
		cin >> da.arr[i];

	// 역순으로 정수를 출력한다.
	for (i = size - 1; i >= 0; --i)
		cout << da.arr[i] << " ";

	cout << "\n";

	// 따로 메모리를 해제해 줄 필요가 없다.

	return 0;	
}
