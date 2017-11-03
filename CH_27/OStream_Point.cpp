#include <iostream>
using namespace std;
class Point{
private:
	int x, y;
public:
	Point(int x=0, int y=0){ this->x = x; this->y = y; }
	void ShowPos() { std::cout << "Point : " << x << "," << y << endl; }
	friend ostream& operator<<(ostream &, const Point &);
};

ostream & operator<<(ostream & os, const Point & p)
{
	os << "[" << p.x << "," << p.y << "]";
	return os;
}

int main(void){
	Point p1(10, 20);
	// cout.operator<<(p1);
	// cout은 라이브러리 함수이기 때문에, 
	// 사용자가 멤버함수로 만들수 없다. (수정이 불가)
	// 전역함수로 연산자 오버로딩을 정의해야 한다.
	// operator<<(cout, p1); <- friend로 Point에 넣는다.
	cout << p1 << endl;
	cout << p1 << p1 << endl;
	return 0;
}