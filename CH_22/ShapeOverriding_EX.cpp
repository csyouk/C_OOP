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

//�Ϲ����� '����'�� ��¡�ϴ� Ŭ����
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

void Point::Draw() const
{
	cout << "[Point] Position = ( " << xpos << ", " << ypos << ")\n";
}

// �簢���� ��¡�ϴ� Ŭ����
class Rectangle : public Point
{
private:
	double width;
	double height; 
public:
	 
};
//������ ����
Rectangle::Rectangle()
{
	width = height = 100.0f;
}

//Rectangle Draw() �޼��� ����



// ���� ��¡�ϴ� Ŭ����
class Circle : public Point
{
private:
	double radius; 
public:
	 
};
//������ ����
Circle::Circle()
{
	radius = 100.0f;
}

//Circle Draw() �޼��� ����



int main()
{
	// ���� ��ü ���� �� �׸���
	Point s( 100, 100);
	s.Draw();

	// �簢�� ��ü ���� �� �׸���
	Rectangle r( 200, 100, 50, 50);
	r.Draw();

	// �� ��ü ���� �� �׸���
	Circle c(300, 100, 30);
	c.Draw();

	return 0;
}