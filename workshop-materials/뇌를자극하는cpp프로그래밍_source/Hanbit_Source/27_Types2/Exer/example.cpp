#include "complex.h"
#include <iostream>
using namespace std;

Complex operator+(const Complex& left, const Complex& right)
{
	// 실수부와 허수부를 각각 더한다.
	int real = left.real + right.real;
	int imag = left.imaginary + right.imaginary;

	// 결과를 보관한 복소수 객체를 반환한다.
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

	// 객체의 값을 채운다.
	right.Real( real);
	right.Imaginary( imag);

	return i;
}

int main()
{
	Complex c(0, 0);

	// cin 객체에서 직접 입력받는다
	cout << "Complex 객체의 실수부와 허수부를 입력하세요 : ";
	cin >> c;

	// 입력 받은 값을 출력한다.
	cout << c << "\n";

	// +=과 -=연산자를 사용한다.
	c += 1;
	c -= 1;

	// 아래 두 가지는 omplex 클래스에 전혀 어울리지 않는
	// 기능이지만 연습삼아서 해보기 바란다. 해보면 재밌다.

	// Complex 객체 c를 마치 함수처럼 사용한다.
	c();

	// Complex 객체 c를 마치 배열처럼 사용한다.
	int real = c[0];	
	int imag = c[1];

	cout << "real = " << real << ", imag = " << imag << "\n";

	return 0;
}