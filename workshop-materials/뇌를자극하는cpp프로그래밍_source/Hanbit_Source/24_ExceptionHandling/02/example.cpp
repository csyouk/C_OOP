#include "dynamicarray.h"
#include <iostream>
using namespace std;

int main()
{
	// ũ�Ⱑ 10�� �迭 ��ü�� �����.
	DynamicArray arr(10);


	// �ùٸ� �ε����� �����Ѵ�
	bool b;
	b = arr.SetAt(5, 0);
	if (!b)
		cout << "arr[5] ��� ����!!\n";

	// �Ϻη� ���� ���� �ε����� �����Ѵ�
	b = arr.SetAt(20, 0);
	if (!b)
		cout << "arr[20] ��� ����!!\n";


	return 0;	
}

