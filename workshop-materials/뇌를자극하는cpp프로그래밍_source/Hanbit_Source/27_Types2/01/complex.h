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

private:
	int real;		// �Ǽ���
	int imaginary;	// �����
};

#endif
