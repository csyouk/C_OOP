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

private:
	int real;		// 실수부
	int imaginary;	// 허수부
};

#endif
