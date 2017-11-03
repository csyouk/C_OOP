#include <iostream>
#include <string>
using namespace std;

int main()
{
	// 전체 경로를 가진 문자열을 만든다.
	string path = "c:\\My Document\\Pictures\\33.jpg";

	// 문자열의 길이를 얻어둔다.
	int len = path.size();

	// 맨 뒤쪽의 3 문자만 얻어온다.
	string ext = path.substr( len - 3, 3);

	// 결과를 출력해본다.
	cout << "extention = " << ext << "\n";

	return 0;
}
