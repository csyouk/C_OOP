#include <iostream>
using namespace std;

int main()
{
	// !�������� ���
	bool b1, b2;
	b1 = !true;
	b2 = !false;

	// ��� ���
	cout << boolalpha;
	cout << "NOT true  --> " << b1 << "\n";
	cout << "NOT false --> " << b2 << "\n";

	return 0;
}