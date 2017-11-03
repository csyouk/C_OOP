#include <iostream>
using namespace std;

int main()
{
	// 전체 합을 보관할 변수
	int sum = 0;

	// 1~10까지 반복하면서 더한다.
	for (int i = 1; i <= 10; ++i)
		sum += i;	// 현재까지의 합에 i를 더한다.

	// 결과 출력
	cout << "현재 i의 값 = " << i << "\n";
	cout << "1~10 까지의 합 = " << sum << "\n";

	return 0;
}