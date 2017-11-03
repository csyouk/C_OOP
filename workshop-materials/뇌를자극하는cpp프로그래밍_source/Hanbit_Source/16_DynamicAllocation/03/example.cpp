#include <iostream>
using namespace std;

int main()
{
	// 메모리를 할당한다.
	short* p = new short [100];

	// c에 보관된 주소 값을 확인한다.
	cout << "p = " << p << "\n";

	// 메모리를 해제한다.
	delete[] p;

	// c에 보관된 주소 값을 확인한다.
	cout << "p = " << p << "\n";

	// 메모리를 해제한다.
	delete[] p;

	return 0;
}
