#include "point.h"

int main()
{
	// 객체를 생성한다.
	Point pt(100, 100);

	// 객체에 대한 포인터를 정의한다.
	Point* p = 0;

	// 객체를 동적으로 생성한다.
	p = new Point(50, 50);

	// 객체의 내용을 출력한다.
	pt.Print();
	p->Print();

	// 동적으로 생성한 객체를 해제한다.
	delete p;
	p = 0;

	return 0;
}
