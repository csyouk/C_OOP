#include "point.h"

int main()
{
	// �� 3���� �迭
	Point arr[3] = { Point(100, 100), Point(50, 100), Point( 10, 10) };

	// ��� ���Ҹ� ����Ѵ�.
	for (int i = 0; i < 3; ++i)
		arr[i].Print();

	return 0;
}
