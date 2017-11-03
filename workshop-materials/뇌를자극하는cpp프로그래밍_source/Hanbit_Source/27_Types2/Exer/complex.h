#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

// 복소수 클래스
class Complex
{
	friend Complex operator+(const Complex& left, const Complex& right);

public:
	// 생성자
	Complex(int realPart, int imaginaryPart)
		: real(realPart), imaginary(imaginaryPart) 
	{}
	Complex(int i)
		: real(i), imaginary(0)
	{}

	// 접근자들
	int Real(int realPart) {real = realPart; return real;}
	int Imaginary(int ImaginaryPart) {imaginary = ImaginaryPart; return real;}

	int Real() const {return real;}
	int Imaginary() const {return imaginary;}

	// 연산자

	// 함수처럼 호출할 수 있게 만든다.
	void operator()()
	{
		cout << "operator()\n";
	}
	// 배열처럼 사용할 수 있게 만든다.
	int operator[](int index)
	{
		if (0 == index)
			return this->real;
		if (1 == index)
			return this->imaginary;

		return 0;
	}

	// +=, -= 연산자
	Complex operator+=(const Complex& c)
	{
		// 자기 자신에 인자의 값을 더한다.
		this->real += c.real;
		this->imaginary += c.imaginary;

		return *this;
	}
	Complex operator-=(const Complex& c)
	{
		// 자기 자신에 인자의 값을 뺀다.
		this->real -= c.real;
		this->imaginary -= c.imaginary;

		return *this;
	}

	// ++c 의 경우 (전치 연산)
	Complex operator++()
	{
		// 실수부의 값을 먼저 더한다.
		this->real++;

		// 현재 값을 반환하다.
		return *this;
	}

	// c++ 의 경우 (후치 연산)
	Complex operator++(int)
	{
		// 현재값을 먼저 보관한다.
		Complex prev( this->real, this->imaginary);

		// 실수부의 값을 더한다.
		this->real++;

		// 보관한 값을 반환한다.
		return prev;
	}

private:
	int real;		// 실수부
	int imaginary;	// 허수부
};

#endif
