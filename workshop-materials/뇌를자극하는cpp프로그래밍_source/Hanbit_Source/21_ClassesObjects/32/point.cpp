#include "point.h"
#include <iostream>
using namespace std;

inline void Point::SetX(int value) 
{ 
	if (value < 0)		
		x = 0;
	else if (value > 100)	
		x = 100;
	else			
		x = value;
}

inline void Point::SetY(int value)
{ 
	if (value < 0)		
		y = 0;
	else if (value > 100)	
		y = 100;
	else			
		y = value;
}

Point::Point(const Point& pt)
{
	x = pt.x;
	y = pt.y;
}

Point::Point(int initialX, int initialY)
{
	SetX(initialX);
	SetY(initialY);
}

Point::Point()
{
	x = 0;
	y = 0;
}
void Point::Print()
{
	cout << "( " << x << ", " << y << ")\n";
}
