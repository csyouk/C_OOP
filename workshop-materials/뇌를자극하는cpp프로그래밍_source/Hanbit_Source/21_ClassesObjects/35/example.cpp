#include "point.h"

// void XX() ������ �Լ��� ���� ������
typedef void (*FP1)(int);
// void Point::XX() ������ ��� �Լ��� ���� ������
typedef void (Point::*FP2)(int);

int main()
{
	// ��ü�� �����Ѵ�.
	Point pt(50, 50);

	// FP1, FP2�� ����ؼ� Print() �Լ��� ����Ų��.
	// FP1 fp1 = &Point::SetX;	// ����
	FP2 fp2 = &Point::SetX;	// ����

	// �Լ� �����͸� ����ؼ� �Լ� ȣ��
	(pt.*fp2)(100);	

	// ���� ���
	pt.Print();

	return 0;
}
