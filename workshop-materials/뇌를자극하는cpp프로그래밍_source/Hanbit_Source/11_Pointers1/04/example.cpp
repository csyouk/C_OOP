#include <iostream>
using namespace std;

int main()
{
	// p�� a�� ����Ű���� �����.
	int a = 123;
	int* p = &a;

	// p�� ����Ű�� ������ ���� ��´�.
	cout << "*p = " << *p << "\n";

	// p�� ����Ű�� ������ ���� �����Ѵ�.
	*p = 789;

	// ���� ������ ����Ѵ�.
	cout << "a = " << a << "\n";
	cout << "*p = " << *p << "\n";

	return 0;
}