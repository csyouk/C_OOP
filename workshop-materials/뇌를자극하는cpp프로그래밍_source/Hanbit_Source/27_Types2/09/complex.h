#ifndef COMPLEX_H
#define COMPLEX_H

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
