#include <iostream>
#include <C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include\vld.h>
using namespace std;

class Point{
private:
	int xpos;
	int ypos;
public:
	Point(int, int);
};

Point::Point(int _x, int _y){
	xpos = _x; ypos = _y;
}

int main(void){

	Point pos1(10, 20);
	Point pos2(5, 5);

	return 0;
}