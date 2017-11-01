#include <iostream>
using namespace std;

int main(void){

	int x = 100, y = 200;
	int *p1 = &x;

	*p1 = 150;
	p1 = &y;

	cout << "*p1: " << *p1 << endl;

	const int * p2 = &x;
	//*p2 = 150;// 불가
	p2 = &y;
	cout << "*p2 : " << *p2 << endl;

	// p3 포인터를 상수화
	int * const p3 = &x; 
	*p3 = 170;
	//p3 = &y; //불가
	cout << "*p3 : " << *p3 << endl;

	const int * const p4 = &x;
	//*p4 = 100;
	//p4 = &y;
	cout << "*p4 : " << *p4 << endl;

	return 0;
}