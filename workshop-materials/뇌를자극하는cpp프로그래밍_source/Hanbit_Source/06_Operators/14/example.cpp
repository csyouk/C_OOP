#include <iostream>
using namespace std;

int main()
{
	// 4 개의 변수를 동일한 값으로 채운다.
	int A, B, C, D;
	A = B = C = D = 3;

	// 다양하게 ++, -- 연산자를 사용한다.
	int ppA, Bpp, mmC, Dmm;
	ppA = ++A;
	Bpp = B++;
	mmC = --C;
	Dmm = D--;

	// 결과를 출력한다.
	cout << "  A,   B,   C,   D : " << A << ", " << B << ", " << C << ", " << D << "\n";
	cout << "++A, B++, --C, D-- : " << ppA << ", " << Bpp << ", " << mmC << ", " << Dmm << "\n";

	return 0;
}