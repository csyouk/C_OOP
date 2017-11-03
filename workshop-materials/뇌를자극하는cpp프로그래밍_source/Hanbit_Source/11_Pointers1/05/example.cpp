#include <iostream>
using namespace std;

int main()
{
	// int 타입의 변수 정의
	int i = 0x12345678;

	// char* 타입의 포인터로 i를 가리킨다.
	char* pc = (char*)&i;

	// pc가 가리키는 값을 구한다.
	cout << hex;
	cout << "*pc = " << (int) *pc << "\n";

	return 0;
}