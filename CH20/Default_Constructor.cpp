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

	// 사용자 정의 생성자가 만들어 지면 디폴트 생성자는 호출하지 못한다.
	// 사용자 정의 생성자를 만들려면, default생성자를 반드시 명시적으로 정의해야 한다.
	// 하지만 default argument를 사용하면, default constructor를 정의할 필요가 없다.
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

	Point p4(); // 객체 생성이 아님. 함수의 원형으로 이해한다.
	
	Point p5(300);
	p5.ShowData();
	
	return 0;
}