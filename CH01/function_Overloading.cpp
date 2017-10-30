#include <iostream>
using namespace std;

void MyFunc(void){
	cout << "MyFunc() invoked!" << endl;
}

void MyFunc(char ch){
	cout << "MyFunc(char " << ch << ") invoked!" << endl;
}

void MyFunc(int num){
	cout << "MyFunc(int " << num << ") invoked!" << endl;
}

void MyFunc(double x, int y){
	cout << "MyFunc(double x " << x << ", int " << y <<") invoked!" << endl;
}

int main(void)
{
	
	MyFunc();
	MyFunc('A');
	MyFunc(101);
	MyFunc(3.14, 200);
	//MyFunc(7,8,9); // error, overloaded function not defined

	return 0;
}