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

// 전역함수 연산자 오버로딩은 클래스에 추가시 
// friend 키워드를 추가해야 한다.
// 그래야 private에 접근이 가능하다.
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
	// 후치 연산은 p1.operator++(); 과 같이 처리된다.
	// 후치 연산은 연산의 전과 후가 값이 달라야 한다.
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
	// p5.operator--(int);  // 멤버함수 연산자 오버로딩.
	// operator--(p5, int); // 전역함수 연산자 오버로딩.
	Point p6 = p5--; 
									 
	p5.ShowPos(); // 2,2
	p6.ShowPos(); // 3,3
	cout << "============================================" << endl;

	Point p7(5, 5);
	// 전치 연산자를 전역함수로 구현해 보자. 
	// 멤버일 경우는 p7.operator--();
	// 전역일 경우는 operator--(p7);
	Point p8 = --p7;
	p7.ShowPos(); // 4,4
	p8.ShowPos(); // 4,4
	return 0;
}