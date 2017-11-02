/*
일반적인 도형을 의미하는 Point(좌표값 저장)클래스와 사각형을 의미하는
Rectangle(좌표,가로,세로) 클래스, 원을 의미하는 Circle(좌표,반지름)클래스를 정의한다.
사각형과 원은 도형의 일종이므로 Point클래스와 상속관계를 구성한다.
다음 main() 함수를 참고하여 다음의 결과를 출력한다.

실행결과
[Point] Position = ( 100, 100)
[Rectangle] Position = ( 200, 100) Size = ( 50, 50)
[Circle] Position = ( 300, 100) Radius = 30
*/

#include <iostream>
using namespace std;

// 추상 클래스!
class Point
{
protected:
	double xpos, ypos;
public:
	Point()
	{
		xpos = ypos = 0.0;
	}
	Point(double _x, double _y)
	{
		xpos = _x;
		ypos = _y;
	}
	virtual void Draw() const = 0;
};

// 순수 가상함수로 만들면 구현부를 없애야 한다.
//void Point::Draw() const{
//	cout << "[Point] Position = ( " << xpos << ", " << ypos << ")\n";
//}

// 사각형을 상징하는 클래스
class Rectangle : public Point
{
private:
	double width;
	double height;
public:
	Rectangle();
	Rectangle(double, double, double, double);
	void Draw() const;
};
//생성자 정의
Rectangle::Rectangle()
{
	width = height = 100.0f;
}
Rectangle::Rectangle(double x, double y, double w, double h) : Point(x, y){
	width = w;
	height = h;
}
//Rectangle Draw() 메서드 정의
void Rectangle::Draw() const{
	cout << "[Rectangle] Position = ( " << xpos << ", " << ypos << ") Size = ( " << width << ", " << height << ")\n";
}


// 원을 상징하는 클래스
class Circle : public Point
{
private:
	double radius;
public:
	Circle();
	Circle(double, double, double);
	void Draw() const;
};
//생성자 정의
Circle::Circle()
{
	radius = 100.0f;
}
Circle::Circle(double x, double y, double r) : Point(x, y)
{
	radius = r;
}
//Circle Draw() 메서드 정의
void Circle::Draw() const{
	cout << "[Circle] Position = ( " << xpos << ", " << ypos << ") Radius = " << radius << "\n";
}


int main()
{
	//Point * p1 = new Rectangle(5, 10, 20, 30);
	//Point * p2 = new Circle(5, 10, 20);
	//Point * p3 = new Rectangle(15, 10, 14, 25);
	////Point * p4 = new Point(5, 6);

	//// Point의 Draw가 아닌 파생 클래스의 Draw함수를 호출하고 싶다면
	//// Point의 Draw함수를 virtual로 만들어야 한다.
	//// 다형성!. 
	//// 상속관계에서만 일어난다.
	//// 외부에서 보기에는 동일한 메소드를 호출하지만, 
	//// 서로 다른 작업을 수행하고 있다.
	//p1->Draw();
	//p2->Draw();
	//p3->Draw();
	////p4->Draw();

	// 추상 클래스는 객체는 만들지 못해도
	// 객체 배열은 만들 수 있다.
	Point * points[6];
	points[0] = new Rectangle(5, 10, 20, 30);
	points[1] = new Circle(5, 10, 20);
	points[2] = new Rectangle(1500, 100, 14, 25);
	points[3] = new Rectangle(35, 310, 20, 30);
	points[4] = new Circle(65, 310, 4320);
	points[5] = new Rectangle(2315, 4410, 3214, 4525);

	int i;
	for (i = 0; i < 6; i++)
	  points[i]->Draw();
	
	for (i = 0; i < 6; i++)
		delete points[i];

	for (i = 0; i < 6; i++)
		points[i] = NULL;

	return 0;
}