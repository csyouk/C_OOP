#include <iostream>
#include <cstring>
#include <memory>
using namespace std;

// 잘못된 인자를 의미하는 클래스
class InvalidArgument
{
};

// 문자열을 뒤집는다
void Reverse(char* str)
{
	// 인자가 올바른지 확인한다.
	if (NULL == str)
		throw InvalidArgument();

	// 문자열의 길이를 잰다.
	int len = strlen(str);

	// 문자열을 복사할 메모리를 할당한다.
	char* new_str = new char[len + 1];

	// 문자열을 뒤집어서 복사한다.
	for (int i = 0; i < len; ++i)
		new_str[i] = str[len - i - 1];

	// 새 문자열의 끝에 NULL 문자를 넣는다.
	new_str[len] = '\0';

	// 새 문자열을 원래 문자열에 복사한다.
	strcpy( str, new_str);

	// 메모리를 해제한다.
	delete[] new_str;
}

int main()
{
	try
	{
		// 사용자로부터 입력받을 문자열
		char user_str[10];

		// 문자열을 입력받는다.
		cout << "문자열을 입력하세요 : ";
		cin.get( user_str, 10);

		// 문자열을 뒤집는다.
		Reverse( user_str);

		// 뒤집은 문자열을 출력한다.
		cout << "뒤집으면 이렇게 됩니다 : " << user_str << "\n";
	}
	catch(InvalidArgument& ex)
	{
		// "인자가 잘못되었습니다"라는 에러 메시지 보다는
		// 사용자가 알아들을 수 있는 수준의 메시지를 출력하는 것이 좋다.
		// 다만 개발자는 어떤 문제가 발생했는지 알아야 하므로
		// 괄호 안에 개발자만 알 수 있는 에러 번호 같은 것을 
		// 넣어두는 것은 좋은 생각이다.
		cout << "문제가 발생했습니다(100)\n";
	}
	catch(bad_alloc& ex)
	{
		// bad_alloc 을 굳이 Reverse() 함수 안에서 받을 필요는 없다.
		// bad_alloc 을 받았을 때 무엇을 해야 할 지 아는
		// 함수가 받으면 된다.
		// main() 함수는 bad_alloc 을 받았을 때 메모리가 부족하다는
		// 에러 메시지를 출력해야 한다는 사실을 안다.

		cout << "메모리가 부족합니다\n";
	}

	return 0;
}