#include <iostream>
using namespace std;

class Point{
private:
	int x, y;
public:
	//Point(){}
	//Point(){
	//	cout << "Point instance created." << endl;
	//}

	// ����� ���� �����ڰ� ����� ���� ����Ʈ �����ڴ� ȣ������ ���Ѵ�.
	// ����� ���� �����ڸ� �������, default�����ڸ� �ݵ�� ��������� �����ؾ� �Ѵ�.
	// ������ default argument�� ����ϸ�, default constructor�� ������ �ʿ䰡 ����.
	Point(int _x=0, int _y=0){
		x = _x; y = _y;
		cout << "Point instance created. X, Y value is : " << x << "," << y << endl;
	}
	~Point(){
		cout << "Point instance destroyed." << endl;
	}
	void ShowData(){
		cout << x << "," << y << endl;
	}
};

int main(void){
	int x, y;
	Point p1;
	p1.ShowData();

	Point p2(100,200);
	p2.ShowData();

	Point p3 = Point(50, 60);
	p3.ShowData();

	Point p4(); // ��ü ������ �ƴ�. �Լ��� �������� �����Ѵ�.
	
	Point p5(300);
	p5.ShowData();
	
	return 0;
}