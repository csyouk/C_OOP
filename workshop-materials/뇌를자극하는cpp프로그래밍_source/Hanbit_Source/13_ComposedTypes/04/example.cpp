#include <iostream>
using namespace std;

int main()
{
	// ���迡 ���� ������ �����Ѵ�.
	int target = 20;

	// ���۷��� ������ �����Ѵ�.
	int& ref = target;

	// ������ ����غ���.
	cout << "ref    = " << ref << "\n";
	cout << "target = " << target << "\n";
	cout << "&ref    = " << &ref << "\n";
	cout << "&target = " << &target << "\n";

	// ref�� ���� �ٲ㺸��.
	ref = 100;

	// ������ ����غ���.
	cout << "ref    = " << ref << "\n";
	cout << "target = " << target << "\n";
	
	return 0;
}