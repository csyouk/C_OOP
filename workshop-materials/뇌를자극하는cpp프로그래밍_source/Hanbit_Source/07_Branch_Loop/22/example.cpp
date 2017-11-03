#include <iostream>
using namespace std;

int main()
{
	// ILoveYou 라고 찍힌 곳으로 이동한다.
	goto ILoveYou;

	// 이곳을 뛰어넘는지 실험
	cout << "이 문자열을 출력되면 안됩니다.\n";

ILoveYou:
	cout << "여기는 ILoveYou 다음입니다.\n";

	return 0;
}