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

istream& operator>>(istream& i, Complex& right)
{
	int real, imag;
	i >> real >> imag;

	// ��ü�� ���� ä���.
	right.Real( real);
	right.Imaginary( imag);

	return i;
}

int main()
{
	Complex c(0, 0);

	// cin ��ü���� ���� �Է¹޴´�
	cout << "Complex ��ü�� �Ǽ��ο� ����θ� �Է��ϼ��� : ";
	cin >> c;

	// �Է� ���� ���� ����Ѵ�.
	cout << c << "\n";

	// +=�� -=�����ڸ� ����Ѵ�.
	c += 1;
	c -= 1;

	// �Ʒ� �� ������ omplex Ŭ������ ���� ��︮�� �ʴ�
	// ��������� ������Ƽ� �غ��� �ٶ���. �غ��� ��մ�.

	// Complex ��ü c�� ��ġ �Լ�ó�� ����Ѵ�.
	c();

	// Complex ��ü c�� ��ġ �迭ó�� ����Ѵ�.
	int real = c[0];	
	int imag = c[1];

	cout << "real = " << real << ", imag = " << imag << "\n";

	return 0;
}