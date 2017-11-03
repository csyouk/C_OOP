#include <iostream>
using namespace std;

int main()
{
	// 변수를 정의한다.
	char c = 'B';
	int i = 19;
	float f = 4.5f;

	// 주소를 출력한다.
	cout << "c의 주소 = " << (int*)&c << "\n";
	cout << "i의 주소 = " << &i << "\n";
	cout << "f의 주소 = " << &f << "\n";
	return 0;
}