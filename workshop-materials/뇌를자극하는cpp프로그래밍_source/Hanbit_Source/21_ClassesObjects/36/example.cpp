#include "point.h"

int main()
{
	// ��ü�� �����Ѵ�.
	Point pt(50, 50);
	Point delta( 100, 100);

	// ���� x ������ 10, y ������ -10 ��ŭ �̵���Ų��.
	pt.Offset( 10, -10);

	// ���� ���� ��ġ ���
	pt.Print();

	// ���� ���� ������ �̵���Ų��. (������ �׽�Ʈ)
	pt.Offset( delta);

	// ���� ���� ��ġ ���
	pt.Print();

	return 0;
}
