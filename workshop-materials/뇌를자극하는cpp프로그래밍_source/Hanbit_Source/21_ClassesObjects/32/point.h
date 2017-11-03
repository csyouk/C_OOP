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
	void SetX(int value);
	void SetY(int value);
	int GetX() {return x;};
	int GetY() {return y;};

private:
	// ��� ����
	int x, y;
};

#endif
