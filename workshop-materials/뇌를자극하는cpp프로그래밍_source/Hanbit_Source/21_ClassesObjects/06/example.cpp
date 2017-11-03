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

	// 생성자
	Point();
};

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

	// pt의 내용을 출력한다.
	pt.Print();

	return 0;
}
