#include <iostream>
using namespace std;

int main()
{
	// ����ü�� �����Ѵ�.
	// 2���������� ���� ���� ����
	struct Point
	{
		int x;	// x ��ǥ
		int y;	// y ��ǥ
	};

	// ������ �� �� �����Ѵ�.
	Point pt1 = { 30, 50};
	Point pt2;

	// pt1�� pt2�� �����Ѵ�.
	pt2 = pt1;

	// ����� ���� ����Ѵ�.
	cout << "pt1 = ( " << pt1.x << ", " << pt1.y << ")\n";
	cout << "pt2 = ( " << pt2.x << ", " << pt2.y << ")\n";

	return 0;
}
