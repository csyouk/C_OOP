#include <iostream>
using namespace std;

int main()
{
	// ����Ÿ�԰��� ����ȯ
	int i = 131071;
	unsigned short i2us = i;	// int -> unsigned short
	short  i2s = i;				// int -> short

	// �Ǽ�Ÿ�԰��� ����ȯ
	double d = 12345678901234.56789;
	float d2f = d;				// double -> float


	// �Ǽ�Ÿ�Կ��� ����Ÿ������ ����ȯ
	float f = 76543.21f;
	short f2s = f;				// float -> short

	// ����Ÿ�Կ��� �Ǽ�Ÿ������ ����ȯ
	int big_i = 1234567890;
	float i2f = big_i;			// int -> float

	// ��� ���
	cout << fixed;
	cout << "int : " << i << "\n\tto unsigned short : " << i2us << "\n\tto short : " << i2s << "\n\n";
	cout << "double : " << d << "\n\tto float : " << d2f << "\n\n";
	cout << "float : " << f << "\n\tto short : " << f2s << "\n\n";
	cout << "int : " << big_i << "\n\tto float : " << i2f << "\n\n";

	return 0;
}