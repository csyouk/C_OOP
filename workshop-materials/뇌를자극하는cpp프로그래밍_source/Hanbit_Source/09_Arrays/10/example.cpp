#include <iostream>
using namespace std;

int main()
{
	// �׳� ������ �迭�� �����.
	char ThisIsNotString[] = { 'H', 'e', 'l', 'l', 'o' };

	// ���ڿ��� �����.
	char ThisIsString[] = { 'H', 'e', 'l', 'l', 'o', '\0'};

	// �� �迭�� cout ��ü�� ������.
	cout << ThisIsNotString << "\n";
	cout << ThisIsString << "\n";

	return 0;
}
