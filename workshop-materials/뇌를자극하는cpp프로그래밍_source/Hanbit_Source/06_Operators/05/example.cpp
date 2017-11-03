int main()
{
	// 정보를 보관할 변수 정의
	int age;	// 나이
	bool male;	// 남성인가?

	// age, male 값을 입력받는다.
	// ( 여러분은 아직 입력 받는 법을 배우지 않았으므로
	// 소스 코드 상에서 그냥 대입한다)
	age = 20;		// 20 세
	male = true;	// 남성

	// 조건을 만족하는지 검사한다.
	bool ok;		// 자격을 갖춘 사람인가?
	ok = age > 19 && male == true;

	return 0;
}