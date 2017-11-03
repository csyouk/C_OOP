// 전역 변수
int global = 10;

void MyFunction();

int main()
{
	// 지역 변수
	int local = 20;

	// 전역 변수에 접근
	global = 100;	// 성공

	// 자신의 지역 변수에 접근
	local = 200;	// 성공

	// 함수 호출
	MyFunction();

	return 0;
}

void MyFunction()
{
	// 전역 변수에 접근
	global = 100;	// 성공

	// 다른 함수의 지역 변수에 접근
	local = 200;	// 에러
}
