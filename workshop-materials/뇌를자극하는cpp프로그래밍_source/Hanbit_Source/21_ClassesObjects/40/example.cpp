#include "point.h"

int main()
{
	// ��ü�� �����Ѵ�.
	Point pt(100, 100);

	// ��ü�� ���� �����͸� �����Ѵ�.
	Point* p = 0;

	// ��ü�� �������� �����Ѵ�.
	p = new Point(50, 50);

	// ��ü�� ������ ����Ѵ�.
	pt.Print();
	p->Print();

	// �������� ������ ��ü�� �����Ѵ�.
	delete p;
	p = 0;

	return 0;
}
