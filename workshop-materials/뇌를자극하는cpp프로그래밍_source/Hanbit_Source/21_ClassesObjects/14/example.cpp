#include <iostream>
using namespace std;

// Point 클래스를 정의한다.
class Point
{
public:
	// 멤버 변수
	int x, y;

	// 멤버 함수
	void Print();

	// 생성자들
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

// Point 객체를 인자로 요구하는 함수
void Area( const Point& pt)
{
	// (0,0)과 pt 가 이루는 사각형의 면적을 구한다.
	int area = pt.x * pt.y;

	// 결과 출력
	cout << "(0, 0)과 이루는 사각형의 면적 = " << area << "\n";
}

int main()
{
	// 현재 x, y의 정수 값을 가지고 있다고 가정
	int x = 5;
	int y = 7;

	// 생성자를 사용해서 바로 함수를 호출한다.
	Area( Point(x, y) );

	return 0;
}
