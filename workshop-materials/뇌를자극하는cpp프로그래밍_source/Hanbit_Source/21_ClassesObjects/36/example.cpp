#include "point.h"

int main()
{
	// 객체를 생성한다.
	Point pt(50, 50);
	Point delta( 100, 100);

	// 점을 x 축으로 10, y 축으로 -10 만큼 이동시킨다.
	pt.Offset( 10, -10);

	// 현재 점의 위치 출력
	pt.Print();

	// 점을 범위 밖으로 이동시킨다. (안전성 테스트)
	pt.Offset( delta);

	// 현재 점의 위치 출력
	pt.Print();

	return 0;
}
