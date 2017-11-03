#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	// string 객체를 만든다.
	string cppstyle = "Yes, I am.";

	// C 스타일 문자열을 담을 공간을 준비한다.
	char* cstyle = new char [ cppstyle.size() + 1];

	// C 스타일 문자열을 얻어서 복사한다.
	strcpy( cstyle, cppstyle.c_str() );

	// cstyle의 첫번째 문자를 바꿔본다.
	cstyle[0] = 'Z';

	// 두 문자열을 출력한다.
	cout << "cstyle = " << cstyle << "\n";
	cout << "cppstyle = " << cppstyle << "\n";

	// 메모리를 해제한다.
	delete[] cstyle;
	cstyle = NULL;

	return 0;
}
