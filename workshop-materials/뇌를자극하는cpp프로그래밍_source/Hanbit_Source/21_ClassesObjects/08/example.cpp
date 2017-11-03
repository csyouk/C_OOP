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
	cout << "복사 생성자 호출됨!!\n";
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
	Point pt1(100, 100), pt2(200, 200);

	// pt1을 사용해서 새로운 pt3를 초기화 한다.
	Point pt3 = pt1;

	// pt3 의 내용을 출력한다.
	pt3.Print();

	// pt2을 pt3에 대입한다.
	pt3 = pt2;

	// pt3의 내용을 출력한다.
	pt3.Print();

	return 0;
}
