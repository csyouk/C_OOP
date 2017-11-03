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

// Point ��ü�� ���ڷ� �䱸�ϴ� �Լ�
void Area( const Point& pt)
{
	// (0,0)�� pt �� �̷�� �簢���� ������ ���Ѵ�.
	int area = pt.x * pt.y;

	// ��� ���
	cout << "(0, 0)�� �̷�� �簢���� ���� = " << area << "\n";
}

int main()
{
	// ���� x, y�� ���� ���� ������ �ִٰ� ����
	int x = 5;
	int y = 7;

	// Area() �Լ��� ȣ���ϱ� ���ؼ�
	// Point ��ü�� �����.
	Point temp(x, y);

	// �Լ� ȣ��
	Area( temp);

	return 0;
}
