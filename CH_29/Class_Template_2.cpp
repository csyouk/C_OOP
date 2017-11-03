#include <iostream>
#include <cstring>
using namespace std;

template<typename T>
class Point
{
private:
	T x, y;
public:
	Point(T _x, T _y){ x = _x; y = _y;}
	void ShowData(void){ cout << "[" << x << "," << y << "]" << endl; }
};

template<typename T>
void SwapData(T& x, T& y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

int main(void){
	Point<int> p1(10, 10);
	Point<int> p2(20, 20);
	p1.ShowData(); p2.ShowData();
	cout << "===========" << endl;
	SwapData(p1, p2);
	cout << "===========" << endl;
	p1.ShowData(); p2.ShowData();
	cout << "===========" << endl;

	Point<double> p3(1.2, 3.5);
	Point<double> p4(54.4, 10.5);
	p3.ShowData(); p4.ShowData();
	cout << "===========" << endl;
	SwapData(p3, p4);
	cout << "===========" << endl;
	p3.ShowData(); p4.ShowData();
	cout << "===========" << endl;

	Point<char> p5('A', 'B');
	Point<char> p6('Z', 'Y');
	p5.ShowData(); p6.ShowData();
	cout << "===========" << endl;
	SwapData(p5, p6);
	cout << "===========" << endl;
	p5.ShowData(); p6.ShowData();
	cout << "===========" << endl;

	return 0;
}