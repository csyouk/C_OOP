#include <iostream>
//#include <C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include\vld.h>
using namespace std;

class Point{
private:
	int xpos;
	int ypos;
public:
	Point(int, int);
	void ShowPos(void);
	void MovePos(int, int);
	void AddPos(const Point &);
};

Point::Point(int _x, int _y){
	xpos = _x; ypos = _y;
}

void Point::ShowPos(void){
	cout << xpos << "," << ypos << endl;
}

void Point::MovePos(int _x, int _y){
	xpos += _x; ypos += _y;
}

void Point::AddPos(const Point & ref){
	xpos += ref.xpos; ypos += ref.ypos;
}

int main(void){

	Point pos1(10, 20);
	Point pos2(5, 5);

	pos1.MovePos(20, 20);
	pos1.ShowPos();

	pos1.AddPos(pos2);
	pos1.ShowPos();

	return 0;
}