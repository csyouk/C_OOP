#include "complex.h"

int main()
{
	Complex c1(1, 1);
	Complex c2(2, 2);
	Complex c3(0, 0);

	// + �����ڸ� ����� ����
	c3 = c1 + c2;	// c3 = (3, 3)
	c3 = c1.operator +(c2);

	return 0;
}