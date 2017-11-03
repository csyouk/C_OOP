#include <iostream>
using namespace std;

// Point 클래스를 정의한다.
class Point
{
public:
	// 멤버 함수
	void Print();

	// 생성자들
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);

	// 접근자
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
	// 멤버 변수
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
	// 객체를 생성한다.
	Point pt(-50, 200);

	// pt의 내용을 출력한다.
	pt.Print();

	return 0;
}

