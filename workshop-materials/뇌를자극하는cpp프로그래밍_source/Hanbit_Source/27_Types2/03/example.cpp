#include "complex.h"

int main()
{
	Complex c1(1, 1);
	Complex prefix(0, 0);
	Complex postfix(0, 0);

	// ��ġ����
	prefix = ++c1;	// prefix = c1 = (2,1)

	// ��ġ ����
	postfix = c1++;	// postfix = (2,1), c1 = (3,1)

	return 0;
}