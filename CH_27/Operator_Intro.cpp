#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int x=0, int y=0)
	{ this->x = x; this->y = y;}

	Point operator+(const int right)
	{
		Point tmp;
		tmp.x = x + right;
		tmp.y = y + right;
		return tmp;
	}

	Point operator+(const Point & right)
	{
		Point tmp;
		tmp.x = this->x + right.x;
		tmp.y = this->y + right.y;
		return tmp;
	}

	void ShowPos()
	{
		cout << "Point : " << x << "," << y << endl;
	}
};

int main(void){

	Point p1(3, 4);
	p1.ShowPos();

	// 컴파일러는 아래식을 다음과 같이 해석한다.
	// p1.operator + (10)
	Point p2 = p1 + 10; 
	p2.ShowPos();

	Point p3 = p1 + p2;
	p3.ShowPos();

	return 0;
}