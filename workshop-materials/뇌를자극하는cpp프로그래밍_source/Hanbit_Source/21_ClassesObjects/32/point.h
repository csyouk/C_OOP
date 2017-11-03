#ifndef POINT_H
#define POINT_H

// Point 클래스를 정의한다.
class Point
{
public:
	// 멤버 함수
	void Print();

	// 생성자들
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);

	// 접근자
	void SetX(int value);
	void SetY(int value);
	int GetX() {return x;};
	int GetY() {return y;};

private:
	// 멤버 변수
	int x, y;
};

#endif
