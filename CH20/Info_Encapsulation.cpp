#include <iostream>
using namespace std;

class Point{
private:
	int x, y;
public:
	bool setX(int _x){
		if (_x < 0 || _x > 100) {
			cout << "X 좌표 범위 오류." << endl;
			return false;
		}
		x = _x;
		return true;
	}
	bool setY(int _y){
		if (_y < 0 || _y > 100) {
			cout << "Y 좌표 범위 오류." << endl;
			return false;
		}
		y = _y;
		return true;
	}

	int getX(void){
		return x;
	}
	int getY(void){
		return y;
	}

	void ShowPoint(){ // 주의하자 reference type을 넘겨야 한다.
		cout << "x-coord : " << getX();
		cout << " / y-coord : " << getY() << endl;
	}
	void Failure(){
		cout << "X, Y 값 주입 실패 " << endl;
	}
};

// 좌표 정보를 PointShow클래스에서 보여주는 방법이 틀린 것은 아니다.
// 단지 권장사항이 아닐 뿐이다.
//class PointShow{
//public:
//	void ShowPoint(Point & p){ // 주의하자 reference type을 넘겨야 한다.
//		cout << "x-coord : " << p.getX();
//		cout << " / y-coord : " << p.getY() << endl;
//	}
//	void Failure(){
//		cout << "X, Y 값 주입 실패 " << endl;
//	}
//};

int main(void){
	int x, y;
	Point p;
	//PointShow ps;

	cout << "X, Y 좌표는 ? "; // 좌표값은 1~100 사이의 값만 가능하도록 한다.
	cin >> x >> y;



	if (p.setX(x) && p.setY(y)){
		//ps.ShowPoint(p);
		p.ShowPoint();
	} else{
		//ps.Failure();
		p.Failure();
	}
	return 0;
}