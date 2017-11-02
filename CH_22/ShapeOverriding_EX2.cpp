/*
�Ϲ����� ������ �ǹ��ϴ� Point(��ǥ�� ����)Ŭ������ �簢���� �ǹ��ϴ�
Rectangle(��ǥ,����,����) Ŭ����, ���� �ǹ��ϴ� Circle(��ǥ,������)Ŭ������ �����Ѵ�.
�簢���� ���� ������ �����̹Ƿ� PointŬ������ ��Ӱ��踦 �����Ѵ�.
���� main() �Լ��� �����Ͽ� ������ ����� ����Ѵ�.

������
[Point] Position = ( 100, 100)
[Rectangle] Position = ( 200, 100) Size = ( 50, 50)
[Circle] Position = ( 300, 100) Radius = 30
*/

#include <iostream>
using namespace std;

// �߻� Ŭ����!
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

// ���� �����Լ��� ����� �����θ� ���־� �Ѵ�.
//void Point::Draw() const{
//	cout << "[Point] Position = ( " << xpos << ", " << ypos << ")\n";
//}

// �簢���� ��¡�ϴ� Ŭ����
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
//������ ����
Rectangle::Rectangle()
{
	width = height = 100.0f;
}
Rectangle::Rectangle(double x, double y, double w, double h) : Point(x, y){
	width = w;
	height = h;
}
//Rectangle Draw() �޼��� ����
void Rectangle::Draw() const{
	cout << "[Rectangle] Position = ( " << xpos << ", " << ypos << ") Size = ( " << width << ", " << height << ")\n";
}


// ���� ��¡�ϴ� Ŭ����
class Circle : public Point
{
private:
	double radius;
public:
	Circle();
	Circle(double, double, double);
	void Draw() const;
};
//������ ����
Circle::Circle()
{
	radius = 100.0f;
}
Circle::Circle(double x, double y, double r) : Point(x, y)
{
	radius = r;
}
//Circle Draw() �޼��� ����
void Circle::Draw() const{
	cout << "[Circle] Position = ( " << xpos << ", " << ypos << ") Radius = " << radius << "\n";
}


int main()
{
	//Point * p1 = new Rectangle(5, 10, 20, 30);
	//Point * p2 = new Circle(5, 10, 20);
	//Point * p3 = new Rectangle(15, 10, 14, 25);
	////Point * p4 = new Point(5, 6);

	//// Point�� Draw�� �ƴ� �Ļ� Ŭ������ Draw�Լ��� ȣ���ϰ� �ʹٸ�
	//// Point�� Draw�Լ��� virtual�� ������ �Ѵ�.
	//// ������!. 
	//// ��Ӱ��迡���� �Ͼ��.
	//// �ܺο��� ���⿡�� ������ �޼ҵ带 ȣ��������, 
	//// ���� �ٸ� �۾��� �����ϰ� �ִ�.
	//p1->Draw();
	//p2->Draw();
	//p3->Draw();
	////p4->Draw();

	// �߻� Ŭ������ ��ü�� ������ ���ص�
	// ��ü �迭�� ���� �� �ִ�.
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