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


};
int main(void){
	int x, y;
	Point p;

	while (1){
		cout << "X, Y 좌표는 ? " ; // 좌표값은 1~100 사이의 값만 가능하도록 한다.
		cin >> x >> y;
		if (p.setX(x) && p.setY(y)){
			cout << "X, Y = " << p.getX() << " " << p.getY() << endl;
		} else{
			cout << "X, Y 값 주입 실패 " << endl;
		}
	}

	return 0;
}