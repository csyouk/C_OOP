#include "point.h"

// Point ��ü�� �б� �����θ� ����ϴ� �Լ�
void Area( const Point& pt);

int main()
{
	// ��ü�� �����Ѵ�.
	Point pt(50, 50);

	// Area() �Լ��� ȣ���Ѵ�.
	Area( pt);

	return 0;
}
void Area( const Point& pt)
{
	// (0,0)�� pt �� �̷�� �簢���� ������ ���Ѵ�.
	int area = pt.GetX() * pt.GetY();

	// ��� ���
	cout << "(0, 0)�� �� ���� �̷�� �簢���� ���� = " << area << "\n";
}
