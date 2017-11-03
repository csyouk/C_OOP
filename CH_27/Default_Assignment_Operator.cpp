#include <iostream>
using namespace std;

class Point{
private:
	int x, y;
public:
	Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
	Point(const Point &p)			  { cout << "Point(const Point &p)" << endl;  x = p.x; y = p.y; }
	void ShowPos()              { cout << "Point : " << x << "," << y << endl; }
	Point operator=(const Point &p){
		cout << "operator=(const Point &p) called." << endl;
		x = p.x; y = p.y;
		return *this;
	}
};

int main(void){

	Point p1(5, 5);    p1.ShowPos();
	
	// default copy constructor work
	Point p2(p1);      p2.ShowPos();
	
	// default assignment operator works
	// p3.operator=(p1);
	// 사용자가 대입 연산자를 만들지 않았어도, 
	// 모든 멤버에 대한 복사를 수행하는 디폴트 대입 연산자가 작동하고 있었다.
	Point p3; p3 = p1; p3.ShowPos();


	// 객체의 생성과 동시에 객체의 값을 받고 싶다. => 디폴트 복사 생성자.
	// 객체의 생성은 이미 해 놓은 상태에서 객체의 값을 받고 싶다. => 디폴트 대입 연산자.
	return 0;
}