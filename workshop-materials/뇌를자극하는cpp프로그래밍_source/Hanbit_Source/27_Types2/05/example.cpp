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
	Complex c1(10, 5);

	cout << c1 << "\n";

	return 0;
}