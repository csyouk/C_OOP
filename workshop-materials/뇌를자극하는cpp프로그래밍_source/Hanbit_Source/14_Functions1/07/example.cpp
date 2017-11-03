#include <iostream>
using namespace std;

// 함수 원형
int Factorial(int n);

int main()
{
	// 팩토리얼을 구하고 결과를 저장한다.
	int result;
	result = Factorial(5);

	// 결과를 출력한다.
	cout << "5! 는 " << result << "입니다.\n";

	return 0;
}

int Factorial(int n)
{
	// 결과를 저장할 변수를 준비한다.
	int result = 1;

	// 펙토리얼을 구한다.
	for (int i = 1; i <= n; ++i)
		result *= i;
	
	// 결과를 반환한다.
	return result;
}
