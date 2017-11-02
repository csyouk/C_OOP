#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int, int);
	void ShowPos();
	friend Point operator+(const Point &, const Point &);
	friend Point operator+(int , const Point & );
};

Point::Point(int x = 0, int y = 0)
{ this->x = x; this->y = y;}

void Point::ShowPos()
{ cout << "Point : " << x << "," << y << endl;}

// 멤버함수로 못만들 때가 있다.
// 그럴때 전역 함수에 의한 연산자 오버로딩을 사용한다.
Point operator+(const Point & ref1, const Point & ref2)
{
	// private이라서 접근이 불가하다.
	// 따라서 friend 키워드를 통해서 private멤버의 접근을 허용하게 한다.
	Point tmp(ref1.x + ref2.x, ref1.y + ref2.y);
	return tmp;
}

// 연산자의 left operand가 객체가 아닌 경우.
Point operator+(int num, const Point & ref2)
{
	// private이라서 접근이 불가하다.
	// 따라서 friend 키워드를 통해서 private멤버의 접근을 허용하게 한다.
	Point tmp(num + ref2.x, num + ref2.y);
	return tmp;
}

int main(void){
	
	Point p1(1, 2);
	Point p2(2, 1);

	// 전역함수로 만들고 싶다.
	// 전역함수는 다음과 같이 연산한다.
	// operator+(p1,p2)
	Point p3 = p1 + p2;
	p3.ShowPos();

	// operator+(int, p1);
	// 첫번째 연산자의 객체가 this가 아닐 경우는 전역함수로 만들어 줘야 한다.
	Point p4 = 30 + p1; 
	p4.ShowPos();

	return 0;
}