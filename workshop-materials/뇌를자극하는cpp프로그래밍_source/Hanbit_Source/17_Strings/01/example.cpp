#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// 원본 문자열을 하나 만들어 둔다.
	char src[] = "Hanbit-Media";

	// 자! 이제 원본 문자열을 복사해보자.

	// 1. 원본 문자열의 길이를 잰다.
	int len = strlen(src);
	

	// 2. 새 문자열이 담길 메모리를 할당한다.
	char* dest = new char [len + 1];

	// 3. 문자열을 복사한다.
	strcpy(dest, src);

	// 결과를 출력한다.
	cout << "src = " << src << "\n";
	cout << "dest = " << dest << "\n";

	// 메모리를 해제한다.
	delete[] dest;
	dest = NULL;

	return 0;
}
