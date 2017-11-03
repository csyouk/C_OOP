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
	void SetX(int value) { x = value;}
	void SetY(int value) { y = value;}
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
	// 객체를 생성한다.
	Point pt;

	// pt의 x, y 좌표를 대입한다.
	pt.SetX( 100);
	pt.SetY( 100);

	// pt의 x, y좌표를 각각 구해본다.
	cout << "pt.x = " << pt.GetX() << "\n";
	cout << "pt.y = " << pt.GetY() << "\n";

	return 0;
}
