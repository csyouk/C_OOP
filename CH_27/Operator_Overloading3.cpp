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
	// ���׿����ڴ� p1.operator++(); �� �ؼ��ȴ�.
	++p1;
	p1.ShowPos();

	// ���׿����ڴ� p1.operator--(); �� �ؼ��ȴ�.
	--p1;
	p1.ShowPos();

	// return Ÿ���� *this�� ����� �������� ����� �����ϴ�.
	++(++(++p1));
	p1.ShowPos();

	(++(++(++p1))).ShowPos();
	return 0;
}