#include <iostream>
#include <string>
using namespace std;

int main()
{
	// 원본 문자열을 준비한다.
	string src = "Hanbit-Media";

	// 새 문자열을 준비한다.
	string desc;

	// 문자열의 내용을 복사한다.
	desc = src;

	// 두 문자열의 내용을 출력한다.
	cout << "src = " << src << "\n";
	cout << "desc = " << desc << "\n";

	return 0;
}
