#include <iostream>
using namespace std;

void Sub()
{
	// static 키워드를 사용해서 지역 변수 정의
	static int n = 0;

	// n을 1 증가시킨 후 출력
	++n;
	cout << "n = " << n << "\n";
}

int main()
{
	// Sub 함수를 여러 번 호출한다.
	Sub();
	Sub();
	Sub();
	Sub();
	Sub();
		
	return 0;
}