#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int x, int y){ this->x = x; this->y = y; }
	void ShowPos() { cout << "Point : " << x << "," << y << endl; }
	Point & operator++(){ x++; y++; return *this; }
	Point & operator--(){ x--; y--; return *this; }
};
	
int main(void){

	Point p1(1, 2);
	p1.ShowPos();
	// 단항연산자는 p1.operator++(); 로 해석된다.
	++p1;
	p1.ShowPos();

	// 단항연산자는 p1.operator--(); 로 해석된다.
	--p1;
	p1.ShowPos();

	// return 타입을 *this로 만들면 연속적인 계산이 가능하다.
	++(++(++p1));
	p1.ShowPos();

	(++(++(++p1))).ShowPos();
	return 0;
}