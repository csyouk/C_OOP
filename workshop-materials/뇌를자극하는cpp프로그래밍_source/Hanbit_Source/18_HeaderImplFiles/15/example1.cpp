#include "point.h"
#include "example2.h"

int main()
{
	// 두 점을 만든다.
	Point a = {100, 100};
	Point b = {200, 200};

	// 함수를 호출한다.
	double dist;
	dist = Distance(a, b);

	return 0;
}
