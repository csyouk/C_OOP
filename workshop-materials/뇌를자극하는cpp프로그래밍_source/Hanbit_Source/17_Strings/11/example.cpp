#include <iostream>
#include <string>
using namespace std;

int main()
{
	// C 스타일의 문자열을 만든다.
	char cstyle[] = "Are you a string, too?";

	// string 객체를 만든다.
	string cppstyle;

	// 변환한다.
	cppstyle = cstyle;

	// cppstyle의 첫번째 글자를 바꿔본다.
	cppstyle[0] = 'B';

	// 두 문자열을 출력한다.
	cout << "cstyle = " << cstyle << "\n";
	cout << "cppstyle = " << cppstyle << "\n";

	return 0;
}
