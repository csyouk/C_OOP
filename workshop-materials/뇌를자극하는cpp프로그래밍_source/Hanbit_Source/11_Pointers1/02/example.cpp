#include <iostream>
using namespace std;

int main()
{
	// 일반적인 변수를 정의한다.
	int a = 123;

	// 포인터 변수를 정의한다.
	int* p;

	// p가 a를 가리키도록 만든다.
	p = &a;

	// 관련 정보를 출력한다.
	cout << "&a = " << &a << "\n";
	cout << "p  = " << p << "\n";
	cout << "&p = " << &p << "\n";
 
	return 0;
}