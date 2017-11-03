#ifndef COMPLEX_H
#define COMPLEX_H

// 복소수 클래스
class Complex
{
public:
	// 생성자
	Complex(int realPart, int imaginaryPart)
		: real(realPart), imaginary(imaginaryPart) 
	{}

	// 접근자들
	int Real(int realPart) {real = realPart; return real;}
	int Imaginary(int ImaginaryPart) {imaginary = ImaginaryPart; return real;}

	int Real() const {return real;}
	int Imaginary() const {return imaginary;}

	// 연산자
	Complex operator+(const Complex& right)
	{
		// 실수부와 허수부를 각각 더한다.
		int real = this->real + right.real;
		int imag = this->imaginary + right.imaginary;

		// 결과를 보관한 복소수 객체를 반환한다.
		return Complex(real, imag);
	}

private:
	int real;		// 실수부
	int imaginary;	// 허수부
};

#endif
