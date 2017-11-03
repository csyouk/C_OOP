#include <iostream>
using namespace std;

// Point Ŭ������ �����Ѵ�.
class Point
{
public:
	// ��� ����
	int x, y;

	// ��� �Լ�
	void Print();
};

// ��� �Լ�
void Point::Print()
{
	cout << "( " << x << ", " << y << ")\n";
}

int main()
{
	// ��ü�� �����Ѵ�.
	Point pt1, pt2;

	// pt1, pt2�� �ʱ�ȭ �Ѵ�.
	pt1.x = 100;
	pt1.y = 100;
	pt2.x = 200;
	pt2.y = 200;

	// pt1�� ����ؼ� ���ο� pt3�� �ʱ�ȭ �Ѵ�.
	Point pt3 = pt1;

	// pt3 �� ������ ����Ѵ�.
	pt3.Print();

	// pt2�� pt3�� �����Ѵ�.
	pt3 = pt2;

	// pt3�� ������ ����Ѵ�.
	pt3.Print();

	return 0;
}
