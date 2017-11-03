#include <iostream>
using namespace std;
class Point{
private:
	int x, y;
public:
	Point(int x, int y){ this->x = x; this->y = y; }
	void ShowPos() { std::cout << "Point : " << x << "," << y << endl; }
	Point operator++(int){
		Point tmp(x++, y++);
		return tmp;
	}
	Point operator++(){
		x++; y++;
		return *this;
	}
	friend Point operator--(Point &, int);
	friend Point operator--(Point &);
};

// �����Լ� ������ �����ε��� Ŭ������ �߰��� 
// friend Ű���带 �߰��ؾ� �Ѵ�.
// �׷��� private�� ������ �����ϴ�.
Point operator--(Point & p, int)
{
	Point tmp(p.x--, p.y--);
	return tmp;
}

Point operator--(Point & p)
{
	Point tmp(--p.x, --p.y);
	return tmp;
}

int main(void){

	Point p1(1, 1);
	p1.ShowPos();

	cout << "Point p2 = p1++;" << endl;
	// ��ġ ������ p1.operator++(); �� ���� ó���ȴ�.
	// ��ġ ������ ������ ���� �İ� ���� �޶�� �Ѵ�.
	Point p2 = p1++; // p1.operator++(int);
	p1.ShowPos(); // 2,2
	p2.ShowPos(); // 1,1
	cout << "============================================" << endl;

	Point p3(1, 1);  // p3.operatpr++();
	Point p4 = ++p3;
	p3.ShowPos(); // 2,2
	p4.ShowPos(); // 2,2
	cout << "============================================" << endl;

	Point p5(3, 3);
	// p5.operator--(int);  // ����Լ� ������ �����ε�.
	// operator--(p5, int); // �����Լ� ������ �����ε�.
	Point p6 = p5--; 
									 
	p5.ShowPos(); // 2,2
	p6.ShowPos(); // 3,3
	cout << "============================================" << endl;

	Point p7(5, 5);
	// ��ġ �����ڸ� �����Լ��� ������ ����. 
	// ����� ���� p7.operator--();
	// ������ ���� operator--(p7);
	Point p8 = --p7;
	p7.ShowPos(); // 4,4
	p8.ShowPos(); // 4,4
	return 0;
}