#include <iostream>
using namespace std;

int& RefFuncOne(int &ref){
	ref++;
	return ref; // 참조자도 반환이 가능하다.
}

int RefFuncTwo(int & ref){
	ref++;
	return ref;
}

int main(void){
	int num1 = 1;
	
	int &num2 = RefFuncOne(num1);

	num1++;
	num2++;

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	int &num5 = num2; // 참조변수는 다른 참조변수가 또 지시할 수 있다.
	num5++;
	cout << "num5 : " << num5 << endl;
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	cout << "==================" << endl;

	int num3 = 1;
	int num4 = RefFuncTwo(num3);

	num3 += 2;
	num4 += 3;

	cout << "num3 : " << num3 << endl;
	cout << "num4 : " << num4 << endl;


	return 0;
}