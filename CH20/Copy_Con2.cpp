#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int _x, int _y){
		x = _x, y = _y;
	}
	/*
	Point(Point & ref){
		cout << "Point(Point & ref) called" << endl;
		x = ref.x;
		y = ref.y;
	}
	*/
	void ShowData(){
		cout << x << "," << y << endl;
	}
};

int main(void){
	Point p1(10, 10);
	p1.ShowData();

	// default copy constructor called
	Point p2(p1);
	p2.ShowData();
	return 0;
}