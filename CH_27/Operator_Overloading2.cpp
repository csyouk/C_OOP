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

// ����Լ��� ������ ���� �ִ�.
// �׷��� ���� �Լ��� ���� ������ �����ε��� ����Ѵ�.
Point operator+(const Point & ref1, const Point & ref2)
{
	// private�̶� ������ �Ұ��ϴ�.
	// ���� friend Ű���带 ���ؼ� private����� ������ ����ϰ� �Ѵ�.
	Point tmp(ref1.x + ref2.x, ref1.y + ref2.y);
	return tmp;
}

// �������� left operand�� ��ü�� �ƴ� ���.
Point operator+(int num, const Point & ref2)
{
	// private�̶� ������ �Ұ��ϴ�.
	// ���� friend Ű���带 ���ؼ� private����� ������ ����ϰ� �Ѵ�.
	Point tmp(num + ref2.x, num + ref2.y);
	return tmp;
}

int main(void){
	
	Point p1(1, 2);
	Point p2(2, 1);

	// �����Լ��� ����� �ʹ�.
	// �����Լ��� ������ ���� �����Ѵ�.
	// operator+(p1,p2)
	Point p3 = p1 + p2;
	p3.ShowPos();

	// operator+(int, p1);
	// ù��° �������� ��ü�� this�� �ƴ� ���� �����Լ��� ����� ��� �Ѵ�.
	Point p4 = 30 + p1; 
	p4.ShowPos();

	return 0;
}