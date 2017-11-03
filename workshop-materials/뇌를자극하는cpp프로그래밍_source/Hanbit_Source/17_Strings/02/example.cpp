#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// 두 문자열을 준비한다.
	char str1[20] = "abcde";
	char str2[] = "fghij";

	// 두 문자열을 결합한다.
	strcat(str1, str2);

	// 결합된 문자열의 내용을 비교한다.
	if ( strcmp( str1, "abcdefghij") == 0)
		cout << "str1 and \"abcdefghij\" are identical.\n";

	// 일부러 엉뚱한 문자열과 비교해본다
	if ( strcmp( "123456", str1) != 0)
		cout << "\"123456\" and str1 are NOT identical.\n";

	return 0;
}
