// Point 클래스를 정의한다.
class Point
{
public:
	enum { MIN_X = 0, MAX_X = 100, MIN_Y = 0, MAX_Y = 100 };

	// 멤버 함수
	void Print() const;
	void Offset(int x_delta, int y_delta);
	void Offset(const Point& pt);

	// 생성자들
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);

	// 접근자
	void SetX(int value);
	void SetY(int value);
	int GetX() const {return x;};
	int GetY() const {return y;};

private:
	// 멤버 변수
	int x, y;
};

inline void Point::SetX(int value) 
{ 
	if (value < MIN_X)		
		x = MIN_X;
	else if (value > MAX_X)	
		x = MAX_X;
	else			
		x = value;
}	
inline void Point::SetY(int value)
{ 
	if (value < MIN_Y)		
		y = MIN_Y;
	else if (value > MAX_Y)	
		y = MAX_Y;
	else			
		y = value;
}
