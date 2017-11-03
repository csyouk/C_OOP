#include "point.h"

int main()
{
	// 객체를 생성한다.
	Point pt;
	pt.SetX(50);
	pt.SetY(50);

	// pt의 내용을 출력한다.
	pt.Print();

	return 0;
}
