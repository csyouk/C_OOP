#include <iostream>
using namespace std;

// Point Ŭ������ �����Ѵ�.
class Point
{
public:
	// ��� ����
	int x, y;

	// ��� �Լ�
	void Print();

	// �����ڵ�
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);
};

Point::Point(const Point& pt)
{
	cout << "���� ������ ȣ���!!\n";
	x = pt.x;
	y = pt.y;
}

Point::Point(int initialX, int initialY)
{
	x = initialX;
	y = initialY;
}

Point::Point()
{
	x = 0;
	y = 0;
}
void Point::Print()
{
	cout << "( " << x << ", " << y << ")\n";
}

int main()
{
	// ��ü�� �����Ѵ�.
	Point pt1(100, 100), pt2(200, 200);

	// pt1�� ����ؼ� ���ο� pt3�� �ʱ�ȭ �Ѵ�.
	Point pt3 = pt1;

	// pt3 �� ������ ����Ѵ�.
	pt3.Print();

	// pt2�� pt3�� �����Ѵ�.
	pt3 = pt2;

	// pt3�� ������ ����Ѵ�.
	pt3.Print();

	return 0;
}
