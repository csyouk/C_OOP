#include <iostream>
using namespace std;

int Adder(int x = 1, int y = 2){
	return x + y;
}
int Adder2(int x = 2, int y = 3);

int main(void){
	cout << Adder() << endl;     // 3
	cout << Adder(5) << endl;    // 7
	cout << Adder(3,10) << endl; // 13


	return 0;
}

int Adder2(int x, int y){
	return x + y;
}