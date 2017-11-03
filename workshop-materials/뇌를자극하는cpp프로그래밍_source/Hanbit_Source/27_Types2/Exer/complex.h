#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

// ���Ҽ� Ŭ����
class Complex
{
	friend Complex operator+(const Complex& left, const Complex& right);

public:
	// ������
	Complex(int realPart, int imaginaryPart)
		: real(realPart), imaginary(imaginaryPart) 
	{}
	Complex(int i)
		: real(i), imaginary(0)
	{}

	// �����ڵ�
	int Real(int realPart) {real = realPart; return real;}
	int Imaginary(int ImaginaryPart) {imaginary = ImaginaryPart; return real;}

	int Real() const {return real;}
	int Imaginary() const {return imaginary;}

	// ������

	// �Լ�ó�� ȣ���� �� �ְ� �����.
	void operator()()
	{
		cout << "operator()\n";
	}
	// �迭ó�� ����� �� �ְ� �����.
	int operator[](int index)
	{
		if (0 == index)
			return this->real;
		if (1 == index)
			return this->imaginary;

		return 0;
	}

	// +=, -= ������
	Complex operator+=(const Complex& c)
	{
		// �ڱ� �ڽſ� ������ ���� ���Ѵ�.
		this->real += c.real;
		this->imaginary += c.imaginary;

		return *this;
	}
	Complex operator-=(const Complex& c)
	{
		// �ڱ� �ڽſ� ������ ���� ����.
		this->real -= c.real;
		this->imaginary -= c.imaginary;

		return *this;
	}

	// ++c �� ��� (��ġ ����)
	Complex operator++()
	{
		// �Ǽ����� ���� ���� ���Ѵ�.
		this->real++;

		// ���� ���� ��ȯ�ϴ�.
		return *this;
	}

	// c++ �� ��� (��ġ ����)
	Complex operator++(int)
	{
		// ���簪�� ���� �����Ѵ�.
		Complex prev( this->real, this->imaginary);

		// �Ǽ����� ���� ���Ѵ�.
		this->real++;

		// ������ ���� ��ȯ�Ѵ�.
		return prev;
	}

private:
	int real;		// �Ǽ���
	int imaginary;	// �����
};

#endif
