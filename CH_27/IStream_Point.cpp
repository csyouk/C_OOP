#include <iostream>
using namespace std;
class Point{
private:
	int x, y;
public:
	Point(int x = 0, int y = 0){ this->x = x; this->y = y; }
	void ShowPos() { std::cout << "Point : " << x << "," << y << endl; }
	friend istream& operator>>(istream &, Point &);
	friend ostream& operator<<(ostream &, const Point &);
};

istream & operator>>(istream & is, Point & p){
	is >> p.x >> p.y;
	return is;
}
ostream & operator<<(ostream & os, const Point & p){
	os << "[" << p.x << "," << p.y << "]";
	return os;
}

int main(void){
	Point p1;
	
	cout << "x, y �Է� ? ";
	// cin.operator>>(p1);
	// ���������� ��� �Լ��� ���� �� �����Ƿ�,
	// ���� �Լ��� �����.
	// operator(cin, p1);
	cin >> p1;
	cout << p1;

	return 0;
}