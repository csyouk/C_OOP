#include <iostream>
using namespace std;

int main()
{
	// �ǿ����ڸ� �����Ѵ�.
	int a = 3;
	int b = 5;

	// ���� �������� ���
	bool b1, b2, b3, b4, b5, b6;
	b1 = a > b;		// a�� b���� ũ��
	b2 = a >= b;	// a�� b���� ũ�ų� ����
	b3 = a < b;		// a�� b���� �۴�
	b4 = a <= b;	// a�� b���� �۰ų� ����
	b5 = a == b;	// a�� b�� ����
	b6 = a != b;	// a�� b�� ���� �ʴ�


	// bool Ÿ���� ���� ���ڷ� ����ϰ� �����.
	cout << boolalpha;	

	// ����� ���
	cout << a << " > " << b << " --> " << b1 << "\n";
	cout << a << " >= " << b << " --> " << b2 << "\n";
	cout << a << " < " << b << " --> " << b3 << "\n";
	cout << a << " <= " << b << " --> " << b4 << "\n";
	cout << a << " == " << b << " --> " << b5 << "\n";
	cout << a << " != " << b << " --> " << b6 << "\n";

	return 0;
}