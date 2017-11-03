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
	// ����ڰ� ���� �����ڸ� ������ �ʾҾ, 
	// ��� ����� ���� ���縦 �����ϴ� ����Ʈ ���� �����ڰ� �۵��ϰ� �־���.
	Point p3; p3 = p1; p3.ShowPos();


	// ��ü�� ������ ���ÿ� ��ü�� ���� �ް� �ʹ�. => ����Ʈ ���� ������.
	// ��ü�� ������ �̹� �� ���� ���¿��� ��ü�� ���� �ް� �ʹ�. => ����Ʈ ���� ������.
	return 0;
}