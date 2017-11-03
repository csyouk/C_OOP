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
	// �������� �޸𸮸� �Ҵ��Ѵ�.
	arr = new int [arraySize];
}

DynamicArray::~DynamicArray()
{
	// �޸𸮸� �����Ѵ�.
	delete[] arr;
	arr = NULL;
}

int main()
{
	// �� ���� ������ �Է����� �����.
	int size;
	cout << "�� ���� ������ �Է��Ͻðڼ�? ";
	cin >> size;

	// �ʿ��� ��ŭ�� �޸𸮸� �غ��Ѵ�.
	DynamicArray da(size);

	// ������ �Է� �޴´�.
	for (int i = 0; i < size; ++i)
		cin >> da.arr[i];

	// �������� ������ ����Ѵ�.
	for (i = size - 1; i >= 0; --i)
		cout << da.arr[i] << " ";

	cout << "\n";

	// ���� �޸𸮸� ������ �� �ʿ䰡 ����.

	return 0;	
}
