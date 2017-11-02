#include <iostream>
using namespace std;

/*
Circle ��ü�� ��ǥ���� ��ġ������ �������� ���� �� ����� �� �־�� �Ѵ�. 

����  Ring Ŭ������ ���� ����.���� �� ���� ������(�ٱ���,����) 
ǥ�� �����ϹǷ�, �� ���� Circle ��ü�� ������� ���ǰ� �����ϴ�.
*/

class Point
{
private:
	int x;
	int y;

public:
	Point()
	{
		cout << "Point() called." << endl;
		x = 0, y = 0;
	}
	Point(int _x, int _y)
	{
		//cout <<"Point(int _x, int _y) called."<<endl;
		x = _x, y = _y;
	}

	void ShowPointInfo(Point &p)
	{
		// point �� 0,0 �� ����Ѵ�.
		cout << "[" << x << " , " << y << "]" << endl;
	}
};

class Circle
{
private:
	int radius;
	// Circle�� ����μ� Circle�� �����ɶ� Point ��ü ���� �ڵ������ȴ�.
	// static binding.
	Point center; 
public:
	// static binding ���� ��ü�� ������ų��, 
	// ����� ���� ������ �Ʒ��� ���� �θ� Ŭ������ �����ڿ� ��������� ���� �Ѱ���� �Ѵ�.
	Circle(int _x, int _y, int r) : center(_x, _y)
//Circle(int _x, int _y, int r) //: center(_x, _y)
	{
		radius = r;
	}

	void ShowCircleInfo()
	{
		cout << "������: " << radius << ", ";
		center.ShowPointInfo(center);
	}
};


class Ring
{
private:
	Circle cir1;
	Circle cir2;
public:
	Ring(int x1, int y1, int r1, int x2, int y2, int r2)\
		// multi call
		: cir1(x1, y1, r1), cir2(x2, y2, r2)
	{}

	void ShowRingInfo()
	{
		cout << "Ring Info." << endl;
		cir1.ShowCircleInfo();
		cir2.ShowCircleInfo();
	}
};


int main()
{
	Circle cir(20, 20, 5);
	cir.ShowCircleInfo();

	// ���� ��, �ٱ� �� ��
	Ring ring(10,10,4, 20,20,9);
	ring.ShowRingInfo();

	return 0;
}