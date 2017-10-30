#include <iostream>
#include <C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include\vld.h>

using namespace std;

typedef struct _Point{
	int x, y;
}Point;

void Pnt1(Point & p1){
	p1.x = 100;
	p1.y = 200;
}

void Pnt2(Point * p2){
	p2->x = 3000;
	p2->y = 4000;
}

Point & PntAdder(Point & p1, Point & p2){
	Point *ptr3 = new Point;
	ptr3->x = p1.x + p2.x;
	ptr3->y = p1.y + p2.y;
	return *ptr3;
}

int main(void){
	Point *ptr1 = new Point;
	ptr1->x = 10;
	ptr1->y = 20;
	cout << "ptr1 : " << ptr1->x << ", " << ptr1->y << endl;


	Point *ptr2 = new Point;
	ptr2->x = 20;
	ptr2->y = 10;
	cout << "ptr2 : " << ptr2->x << ", " << ptr2->y << endl;

	Pnt1(*ptr1); // call by reference
	cout << "ptr1 : " << ptr1->x << ", " << ptr1->y << endl;

	Pnt2(ptr2); // call by address
	cout << "ptr2 : " << ptr2->x << ", " << ptr2->y << endl;

	Point & pre = PntAdder(*ptr1, *ptr2); // call by reference

	cout << "pre : " << pre.x << ", " << pre.y << endl;


	//delete ptr1, ptr2; // 한 줄에 여러개의 변수를 해제시킬 수 없다. 빌드는 문제없지만, 메모리 누수가 생긴다.
	delete ptr1;
	delete ptr2;

	//delete pre; // pre는 참조 변수 이기 때문에, 이렇게 해제할 수 없다.
	//delete &pre; // 참조변수는 참조변수 연산자를 붙여서 해제시켜야 한다.

	

	return 0;
}
