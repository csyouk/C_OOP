#include <iostream>
using namespace std;

// Point 클래스를 정의한다.
class Point
{
public:
	// 멤버 변수들
	int x, y;

	// 멤버 함수
	void Print()
	{
		cout << "( " << x << ", " << y << ")\n";
	}
};

int main()
{
	// 아직 하는 일 없음
	return 0;
}
