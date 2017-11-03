#include <iostream>
using namespace std;

// 문자열을 뒤집어서 복사해주는 함수
char* ReverseString(const char* src, int len)
{
	// 새로운 문자열을 보관할 메모리를 할당한다.
	// (배열의 경우에는 그냥 충분히 큰 공간을 마련한다)
	char reverse[100];

	// 문자열을 역순으로 복사한다.
	for (int i = 0; i < len; ++i)
		reverse[i] = src[len - i - 1];

	// 새 문자열의 끝에 NULL 문자를 넣어준다.
	reverse[len] = NULL;

	// 새 문자열을 반환한다.
	return reverse;
}

int main()
{
	// 문자열을 하나 만든다.
	char original[] = "NEMODORI";

	// 함수를 호출한다.
	char* copy = ReverseString( original, 8);

	// 두 문자열을 출력한다.
	cout << original << "\n";
	cout << copy << "\n";

	return 0;
}
