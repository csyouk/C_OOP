#include <iostream>
using namespace std;

int main()
{
	// 배열 정의
	long lArray[20];

	// 포인터가 이 배열을 가리키게 만들자
	long (*p)[20] = &lArray;

	// 포인터를 통해서 배열을 사용하자.
	(*p)[3] = 300;

	// 결과를 확인하자
	cout << "lArray[3] = " << lArray[3] << "\n";

	return 0;
}
