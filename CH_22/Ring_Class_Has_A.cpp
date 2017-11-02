#include <iostream>
using namespace std;

/*
Circle 객체는 좌표상의 위치정보와 반지름을 저장 및 출력할 수 있어야 한다. 

또한  Ring 클래스를 정의 하자.링은 두 개의 원으로(바깥쪽,안쪽) 
표현 가능하므로, 두 개의 Circle 개체를 기반으로 정의가 가능하다.
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
		// point 의 0,0 을 출력한다.
		cout << "[" << x << " , " << y << "]" << endl;
	}
};

class Circle
{
private:
	int radius;
	// Circle의 멤버로서 Circle이 생성될때 Point 객체 또한 자동생성된다.
	// static binding.
	Point center; 
public:
	// static binding 으로 객체를 생성시킬때, 
	// 제대로 값을 보려면 아래와 같이 부모 클래스의 생성자에 명시적으로 값을 넘겨줘야 한다.
	Circle(int _x, int _y, int r) : center(_x, _y)
//Circle(int _x, int _y, int r) //: center(_x, _y)
	{
		radius = r;
	}

	void ShowCircleInfo()
	{
		cout << "반지름: " << radius << ", ";
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

	// 안쪽 링, 바깥 쪽 링
	Ring ring(10,10,4, 20,20,9);
	ring.ShowRingInfo();

	return 0;
}