#include <iostream>
#include <string>
using namespace std;

int main()
{
	// string 객체를 만든다.
	string cppstyle = "Yes, I am.";

	// C 스타일 문자열을 가리킬 포인터를 준비한다.
	const char* cstyle = NULL;

	// C 스타일 문자열을 얻는다.
	cstyle = cppstyle.c_str();

	// 두 문자열을 출력한다.
	cout << "cstyle = " << cstyle << "\n";
	cout << "cppstyle = " << cppstyle << "\n";

	return 0;
}
