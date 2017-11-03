#include <iostream>
#include <cstring>
using namespace std;

template<typename T>
void Swap(T & x, T & y){
	T tmp = x;
	x = y;
	y = tmp;
}

int main(void){

	int    n1 = 100,  n2 = 200;
	char   c1 = 'A',  c2 = 'Z';
	double d1 = 1.1,  d2 = 2.6;

	cout << "====================================" << endl;
	cout << "n1 : " << n1 << ", " << "n2 : " << n2 << endl;
	cout << "c1 : " << c1 << ", " << "c2 : " << c2 << endl;
	cout << "d1 : " << d1 << ", " << "d2 : " << d2 << endl;
	cout << "====================================" << endl;

	Swap(n1, n2);
	Swap(c1, c2);
	Swap(d1, d2);

	cout << "n1 : " << n1 << ", " << "n2 : " << n2 << endl;
	cout << "c1 : " << c1 << ", " << "c2 : " << c2 << endl;
	cout << "d1 : " << d1 << ", " << "d2 : " << d2 << endl;
	cout << "====================================" << endl;
	return 0;
}