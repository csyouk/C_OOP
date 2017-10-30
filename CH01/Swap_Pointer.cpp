#include <iostream>
using namespace std;

void swap1(int *, int *);
void swap2(int &, int &);

int main(void){
	int x = 100, y = 200;

	cout << "before : " << x << ", " << y << endl;
	swap1(&x, &y); // call by Pointer, call by address
	cout << "after : " << x << ", " << y << endl;

	int x2 = 500, y2 = 900;
	cout << "before : " << x2 << ", " << y2 << endl;
	swap2(x2, y2); // call by reference
	cout << "after : " << x2 << ", " << y2 << endl;

	return 0;
}

void swap1(int * p1, int * p2){
	int tmp;
	tmp = *p2;
	*p2 = *p1;
	*p1 = tmp;
}

void swap2(int &x, int &y){ // 오버헤드가 더 적다.
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}