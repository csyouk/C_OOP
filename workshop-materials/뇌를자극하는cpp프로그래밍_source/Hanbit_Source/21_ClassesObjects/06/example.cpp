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

	// ������
	Point();
};

Point::Point()
{
	x = 0;
	y = 0;
}
void Point::Print()
{
	cout << "( " << x << ", " << y << ")\n";
}

int main()
{
	// ��ü�� �����Ѵ�.
	Point pt;

	// pt�� ������ ����Ѵ�.
	pt.Print();

	return 0;
}
