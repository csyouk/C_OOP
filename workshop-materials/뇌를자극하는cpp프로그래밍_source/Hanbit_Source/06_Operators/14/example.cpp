#include <iostream>
using namespace std;

int main()
{
	// 4 ���� ������ ������ ������ ä���.
	int A, B, C, D;
	A = B = C = D = 3;

	// �پ��ϰ� ++, -- �����ڸ� ����Ѵ�.
	int ppA, Bpp, mmC, Dmm;
	ppA = ++A;
	Bpp = B++;
	mmC = --C;
	Dmm = D--;

	// ����� ����Ѵ�.
	cout << "  A,   B,   C,   D : " << A << ", " << B << ", " << C << ", " << D << "\n";
	cout << "++A, B++, --C, D-- : " << ppA << ", " << Bpp << ", " << mmC << ", " << Dmm << "\n";

	return 0;
}