#include "point.h"
#include "example2.h"

int main()
{
	// �� ���� �����.
	Point a = {100, 100};
	Point b = {200, 200};

	// �Լ��� ȣ���Ѵ�.
	double dist;
	dist = Distance(a, b);

	return 0;
}
