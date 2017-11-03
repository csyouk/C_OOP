#include <iostream>
using namespace std;

// 공용체 정의
union MyUnion
{
	int i;
	void* p;
};

int main()
{
	// 공용체 변수 정의
	MyUnion uni;

	// uni.i와 uni.p의 주소를 확인하자.
	cout << "&uni.i = " << &uni.i << "\n";
	cout << "&uni.p = " << &uni.p << "\n";

	// uni.i 에 값을 넣고 결과를 출력한다.
	uni.i = 0x12345678;
	cout << hex;
	cout << "uni.i = " << uni.i << "\n";
	cout << "uni.p = " << uni.p << "\n";

	// uni.p 에 값을 넣고 결과를 출력한다.
	uni.p = (void*)0x87654321;
	cout << "uni.i = " << uni.i << "\n";
	cout << "uni.p = " << uni.p << "\n";

	return 0;
}
