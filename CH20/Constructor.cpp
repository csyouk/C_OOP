#include <iostream>
using namespace std;

class Point{
private:
	int x, y;
public:
	Point(){
		cout << "Point instance created." << endl;
	}
	Point(int _x, int _y){
		x = _x; y = _y;
		cout << "Point instance created. X, Y value is : " << x << "," << y << endl;
	}
	~Point(){
		cout << "Point instance destroyed." << endl;
	}
};

int main(void){
	int x, y;
	Point * p = new Point(3,4);
	delete p;

	int xx(30);
	int yy(30423);

	return 0;
}