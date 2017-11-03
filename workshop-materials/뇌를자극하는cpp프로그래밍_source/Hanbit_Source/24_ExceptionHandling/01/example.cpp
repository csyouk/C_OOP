#include "dynamicarray.h"
#include <iostream>
using namespace std;

int main()
{
	// ũ�Ⱑ 10�� �迭 ��ü�� �����.
	DynamicArray arr(10);

	// �� ���ҿ� 10, 20, 30, ... 100 �� ������ ���� �ִ´�
	for (int i = 0; i < 10; ++i)
		arr.SetAt(i, (i + 1)*10 );

	// �迭�� ũ�⸦ ����ϰ�, �� ������ ���� �������� ����غ���.
	cout << "Size of arr = " << arr.GetSize() << "\n";

	for (i = 9; i >= 0; --i)
		cout << "arr[" << i << "] = " << arr.GetAt(i) << "\n";

	return 0;	
}