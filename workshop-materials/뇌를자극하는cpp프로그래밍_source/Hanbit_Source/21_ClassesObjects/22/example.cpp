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
	void SetX(int value) 
	{ 
		if (value < 0)
			x = 0;
		else if (value > 100)
			x = 100;
		else
			x = value;
	}
	void SetY(int value)
	{ 
		if (value < 0)
			y = 0;
		else if (value > 100)
			y = 100;
		else
			y = value;
	}
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
	SetX(initialX);
	SetY(initialY);
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
	Point pt(-50, 200);

	// pt�� ������ ����Ѵ�.
	pt.Print();

	return 0;
}

