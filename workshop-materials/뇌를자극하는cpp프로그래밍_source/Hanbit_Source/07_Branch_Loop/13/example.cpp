#include <iostream>
using namespace std;

int main()
{
	// 시험 점수
	// (임의의 값을 대입한다)
	int score = 2;

	// 점수에 따른 적절한 메시지를 출력
	switch(score)
	{
		case 0:
			cout << "밀려 쓰셨군요~\n";
			break;
		case 1:
			cout << "조금 더 노력하세요~\n";
			break;
		case 2:
			cout << "안타깝네요~\n";
			break;
		case 3:
			cout << "멋있어요~\n";
			break;
	}

	return 0;
}