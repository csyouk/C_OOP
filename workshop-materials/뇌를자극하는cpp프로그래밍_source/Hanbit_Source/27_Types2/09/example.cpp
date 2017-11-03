#include "complex.h"
#include <iostream>
using namespace std;

Complex operator+(const Complex& left, const Complex& right)
{
	// �Ǽ��ο� ����θ� ���� ���Ѵ�.
	int real = left.real + right.real;
	int imag = left.imaginary + right.imaginary;

	// ����� ������ ���Ҽ� ��ü�� ��ȯ�Ѵ�.
	return Complex(real, imag);	
}

ostream& operator<<(ostream& o, const Complex& right)
{
	o << right.Real() << showpos << right.Imaginary() << "i" << noshowpos;
	return o;
}

int main()
{
	int i = 5;
	Complex c(0, 0);

	c = i;			// c = (5, 0)
	c = Complex(i);


	c = c + i;		// c = (10, 0)
	c = c + Complex(i);

	return 0;
}