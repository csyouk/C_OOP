#include <iostream>
#include <C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include\vld.h>
using namespace std;

struct Point{
	int xpos, ypos;
};

Point * PointAdder(const Point * p1, const Point * p2){
	Point * p3 = new Point;
	p3->xpos = p1->xpos + p2->xpos;
	p3->ypos = p1->ypos + p2->ypos;
	return p3;
}

Point PointAdder2(const Point * p1, const Point * p2){
	// Memory leak ¹ß»ý
	Point * tmp = new Point;
	tmp->xpos = p1->xpos + p2->xpos;
	tmp->ypos = p1->ypos + p2->ypos;
	return *tmp;
}

int main(void){

	Point *ptr1 = new Point;
	ptr1->xpos = 3;
	ptr1->ypos = 5;

	Point *ptr2 = new Point;
	ptr2->xpos = 15;
	ptr2->ypos = 20;

	Point *ptr3;
	ptr3 = PointAdder(ptr1, ptr2);
	cout << "ptr3 : " << ptr3->xpos << ", " << ptr3->ypos << endl;

	Point ptr4;
	ptr4 = PointAdder2(ptr1, ptr2);
	cout << "ptr4 : " << ptr4.xpos << ", " << ptr4.ypos << endl;

	delete ptr1;
	delete ptr2;
	delete ptr3;
	return 0;
}