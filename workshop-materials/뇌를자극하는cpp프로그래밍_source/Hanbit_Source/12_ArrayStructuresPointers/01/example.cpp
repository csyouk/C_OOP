#include <iostream>
using namespace std;

int main()
{
	// �迭 ����
	int array[10];

	// �����Ͱ� array[5]�� ����Ű���� �����.
	int* p = &array[5];

	// p�� ���� array[5]�� �ּҸ� ����Ѵ�.
	cout << "p = " << p << "\n";
	cout << "&array[5] = " << &array[5] << "\n";

	// �����Ͱ� array[6]�� ����Ű���� �����.
	p++;

	// p�� ���� array[6]�� �ּҸ� ����Ѵ�.
	cout << "p = " << p << "\n";
	cout << "&array[6] = " << &array[6] << "\n";

	return 0;
}