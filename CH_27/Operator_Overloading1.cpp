#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int, int);
	Point operator+(const int);
	Point operator+(const Point & );
	Point operator-(const Point & );
	Point operator*(const Point & );
	Point operator<<(const int );
	Point operator>>(const int );
	Point& operator+=(const Point & );
	Point& operator-=(const Point & );
	bool operator!=(const Point & );
	bool operator==(const Point & );
	void operator++(void);
	void ShowPos();
};

Point::Point(int x = 0, int y = 0)
{
	this->x = x; this->y = y;
}
Point Point::operator+(const Point & right)
{
	Point tmp;
	tmp.x = this->x + right.x;
	tmp.y = this->y + right.y;
	return tmp;
}

Point Point::operator*(const Point & right)
{
	Point tmp;
	tmp.x = this->x * right.x;
	tmp.y = this->y * right.y;
	return tmp;
}
void Point::operator++(void)
{
	this->x++; this->y++;
}
Point Point::operator-(const Point & right)
{
	Point tmp;
	tmp.x = this->x - right.x;
	tmp.y = this->y - right.y;
	return tmp;
}
Point Point::operator<<(const int shift)
{
	Point tmp;
	tmp.x = this->x << shift;
	tmp.y = this->y << shift;
	return tmp;
}

Point Point::operator>>(const int shift)
{
	Point tmp;
	tmp.x = this->x >> shift;
	tmp.y = this->y >> shift;
	return tmp;
}

bool Point::operator==(const Point & right)
{
	if (this->x == right.x && this->y == right.y)
		return true;
	else
		return false;
}

bool Point::operator!=(const Point & right)
{
	return !(*this == ref);
}


Point& Point::operator+=(const Point & ref)
{
	this->x += ref.x;
	this->y += ref.y;
	return *this;
}
Point& Point::operator-=(const Point & ref)
{
	this->x -= ref.x;
	this->y -= ref.y;
	return *this;
}

void Point::ShowPos()
{
	cout << "Point : " << x << "," << y << endl;
}


int main(void){

	Point p1(3, 4);
	p1.ShowPos();

	// 컴파일러는 아래식을 다음과 같이 해석한다.
	// p1.operator + (10)
	Point p2 = p1 + 10;
	p2.ShowPos();

	Point p3 = p1 + p2;
	p3.ShowPos();


	Point p4 = p2 * p3;
	p4.ShowPos();

	Point p5 = p4 << 10;
	p5.ShowPos();

	Point p6 = p5 >> 10;
	p6.ShowPos();

	Point p7 = p5 - p6;
	p7.ShowPos();
	p7++;
	p7.ShowPos();

	if (p1 == p2)
		cout << "Equal" << endl;
	else
		cout << "Not Equal" << endl;

	if (p1 != p2)
		cout << "Not Equal" << endl;
	else
		cout << "Equal" << endl;

	return 0;
}