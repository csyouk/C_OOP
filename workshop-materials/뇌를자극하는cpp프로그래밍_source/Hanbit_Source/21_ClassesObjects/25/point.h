#ifndef POINT_H
#define POINT_H

// Point Ŭ������ �����Ѵ�.
class Point
{
public:
	// ��� �Լ�
	void Print();

	// �����ڵ�
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);

	// ������
	void SetX(int value) 
	{ 
		if (value < 0)		x = 0;
		else if (value > 100)	x = 100;
		else			x = value;
	}
	void SetY(int value)
	{ 
		if (value < 0)		y = 0;
		else if (value > 100)	y = 100;
		else			y = value;
	}
	int GetX() {return x;};
	int GetY() {return y;};

private:
	// ��� ����
	int x, y;
};

#endif
