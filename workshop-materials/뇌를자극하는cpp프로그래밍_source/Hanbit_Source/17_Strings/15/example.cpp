#include <iostream>
#include <string>
using namespace std;

int main()
{
	// 문자열을 준비한다.
	char cs[20];	// C 스타일
	string cpps;	// C++ 스타일

	// 문자열을 입력받는다.
	cin.getline(cs, 20);
	cin.clear();
	getline(cin, cpps);

	// 문자열을 출력한다.
	cout << "cs = " << cs << "\n";
	cout << "cpps = " << cpps << "\n";

	return 0;
}
