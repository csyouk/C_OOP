#include <iostream>
using namespace std;

int main()
{
	// ��꿡 ����� �� ����
	int a = 8;
	int b = 4;

	// ��Ģ ������ �Ѵ�.
	int c = a + b;	// ����
	int d = a - b;	// ����
	int e = a * b;	// ����
	int f = a / b;	// ������

	// ������ ������ �Ѵ�.
	int g = a % b;	// �������� ������

	// ��� ���
	cout << "8 + 4 = " << c << "\n";
	cout << "8 - 4 = " << d << "\n";
	cout << "8 * 4 = " << e << "\n";
	cout << "8 / 4 = " << f << "\n";
	cout << "8 % 4 = " << g << "\n";

	return 0;
}