#ifndef COMPLEX_H
#define COMPLEX_H

// ���Ҽ� Ŭ����
class Complex
{
public:
	// ������
	Complex(int realPart, int imaginaryPart)
		: real(realPart), imaginary(imaginaryPart) 
	{}

	// �����ڵ�
	int Real(int realPart) {real = realPart; return real;}
	int Imaginary(int ImaginaryPart) {imaginary = ImaginaryPart; return real;}

	int Real() const {return real;}
	int Imaginary() const {return imaginary;}

	// ������
	Complex operator+(const Complex& right)
	{
		// �Ǽ��ο� ����θ� ���� ���Ѵ�.
		int real = this->real + right.real;
		int imag = this->imaginary + right.imaginary;

		// ����� ������ ���Ҽ� ��ü�� ��ȯ�Ѵ�.
		return Complex(real, imag);
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
