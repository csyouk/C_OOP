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
};

// 멤버 함수
void Point::Print()
{
	cout << "( " << x << ", " << y << ")\n";
}

int main()
{
	// 객체를 생성한다.
	Point pt1, pt2;

	// pt1, pt2를 초기화 한다.
	pt1.x = 100;
	pt1.y = 100;
	pt2.x = 200;
	pt2.y = 200;

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
