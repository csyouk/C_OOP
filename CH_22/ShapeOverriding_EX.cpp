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

//일반적인 '도형'을 상징하는 클래스
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
	void Draw() const;
};

void Point::Draw() const{
	cout << "[Point] Position = ( " << xpos << ", " << ypos << ")\n";
}

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
	// 도형 객체 생성 및 그리기
	Point s(100, 100);
	s.Draw();

	// 사각형 객체 생성 및 그리기
	Rectangle r( 200, 100, 50, 50);
	r.Draw();

	// 원 객체 생성 및 그리기
	Circle c(300, 100, 30);
	c.Draw();

	return 0;
}