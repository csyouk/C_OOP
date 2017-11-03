#include <iostream>
#include <cmath>
using namespace std;

#include "example.h"

int main()
{
	// �� ���� �����.
	Point a = {0, 0};
	Point b = {3, 4};

	// �� ���� �Ÿ��� ���Ѵ�.
	double dist_a_b = Distance(a, b);

	// ����� ����Ѵ�.
	cout << "(" << a.x << ", " << a.y << ") �� ";
	cout << "(" << b.x << ", " << b.y << ") �� �Ÿ� = " << dist_a_b << "\n";

	return 0;
}

double Distance(Point p1, Point p2)

{
	// ��Ÿ����� ������ ����Ѵ�.
	double distance;
	distance =  sqrt( pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) );

	// ����� ��ȯ�Ѵ�.
	return distance;
}
