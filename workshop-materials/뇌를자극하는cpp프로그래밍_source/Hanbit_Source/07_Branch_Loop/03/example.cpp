#include <iostream>
using namespace std;

int main()
{
	// 정보를 보관할 변수 정의
	int age;	// 나이

	// age 값을 입력받는다.
	// ( 여러분은 아직 입력 받는 법을 배우지 않았으므로
	// 소스 코드 상에서 그냥 대입한다)
	age = 19;		// 19 세

	// 조건에 따라서 다른 문자열을 출력한다.
	if ( age <= 18)
	{
		cout << "미성년자입니다\n";
	}
	else if ( age == 19)
	{
		cout << "아쉽네요\n";
	}
	else
	{
		cout << "성인입니다\n";
	}

	return 0;
}
