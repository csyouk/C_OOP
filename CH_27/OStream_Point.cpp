#include <iostream>
using namespace std;
class Point{
private:
	int x, y;
public:
	Point(int x=0, int y=0){ this->x = x; this->y = y; }
	void ShowPos() { std::cout << "Point : " << x << "," << y << endl; }
	friend ostream& operator<<(ostream &, const Point &);
};

ostream & operator<<(ostream & os, const Point & p)
{
	os << "[" << p.x << "," << p.y << "]";
	return os;
}

int main(void){
	Point p1(10, 20);
	// cout.operator<<(p1);
	// cout�� ���̺귯�� �Լ��̱� ������, 
	// ����ڰ� ����Լ��� ����� ����. (������ �Ұ�)
	// �����Լ��� ������ �����ε��� �����ؾ� �Ѵ�.
	// operator<<(cout, p1); <- friend�� Point�� �ִ´�.
	cout << p1 << endl;
	cout << p1 << p1 << endl;
	return 0;
}