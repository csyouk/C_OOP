#include <iostream>
using namespace std;

int main()
{
	// 실험에 사용될 변수를 정의한다.
	int target = 20;

	// 레퍼런스 변수를 정의한다.
	int& ref = target;

	// 정보를 출력해보자.
	cout << "ref    = " << ref << "\n";
	cout << "target = " << target << "\n";
	cout << "&ref    = " << &ref << "\n";
	cout << "&target = " << &target << "\n";

	// ref의 값을 바꿔보자.
	ref = 100;

	// 정보를 출력해보자.
	cout << "ref    = " << ref << "\n";
	cout << "target = " << target << "\n";
	
	return 0;
}