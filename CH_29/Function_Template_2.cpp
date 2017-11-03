#include <iostream>
using namespace std;

template<typename T>
int SIZEOF(T x){ return sizeof(x); }

// 함수 템플릿 특수화
template<>
int SIZEOF<char*>(char * x){ return strlen(x); }

int main(void){

	int num = 100;
	double dnum = 3.5;
	char * str = "123456789";

	cout << "SIZEOF(num) :" << SIZEOF(num) << endl;
	cout << "SIZEOF(num) :" << SIZEOF(dnum) << endl;
	cout << "SIZEOF(num) :" << SIZEOF(str) << endl;

	cout << "SIZEOF(num) :" << SIZEOF<int>(num) << endl;
	cout << "SIZEOF(num) :" << SIZEOF<double>(dnum) << endl;
	cout << "SIZEOF(num) :" << SIZEOF<char*>(str) << endl;

	return 0;
}