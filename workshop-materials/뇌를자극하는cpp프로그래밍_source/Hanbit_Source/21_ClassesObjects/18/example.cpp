#include <iostream>
using namespace std;

// Point Ŭ������ �����Ѵ�.
class Point
{
public:
	// ��� �Լ�
	void Print();

	// �����ڵ�
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);

	// ������
	void SetX(int value) { x = value;}
	void SetY(int value) { y = value;}
	int GetX() {return x;};
	int GetY() {return y;};

private:
	// ��� ����
	int x, y;

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


int main()
{
	// ��ü�� �����Ѵ�.
	Point pt;

	// pt�� x, y ��ǥ�� �����Ѵ�.
	pt.SetX( 100);
	pt.SetY( 100);

	// pt�� x, y��ǥ�� ���� ���غ���.
	cout << "pt.x = " << pt.GetX() << "\n";
	cout << "pt.y = " << pt.GetY() << "\n";

	return 0;
}
