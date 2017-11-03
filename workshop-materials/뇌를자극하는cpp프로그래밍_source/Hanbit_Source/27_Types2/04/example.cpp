#include "complex.h"

Complex operator+(const Complex& left, const Complex& right)
{
	// �Ǽ��ο� ����θ� ���� ���Ѵ�.
	int real = left.real + right.real;
	int imag = left.imaginary + right.imaginary;

	// ����� ������ ���Ҽ� ��ü�� ��ȯ�Ѵ�.
	return Complex(real, imag);	
}

int main()
{
	Complex c1(1, 1);
	Complex c2(2, 2);
	Complex c3(0, 0);

	// + �����ڸ� ����� ����
	c3 = c1 + c2;	// c3 = (3, 3)
	c3 = operator +(c1, c2);

	return 0;
}