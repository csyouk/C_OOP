#include <iostream>
using namespace std;

int main()
{
	// �Ϲ����� ������ �����Ѵ�.
	int a = 123;

	// ������ ������ �����Ѵ�.
	int* p;

	// p�� a�� ����Ű���� �����.
	p = &a;

	// ���� ������ ����Ѵ�.
	cout << "&a = " << &a << "\n";
	cout << "p  = " << p << "\n";
	cout << "&p = " << &p << "\n";
 
	return 0;
}