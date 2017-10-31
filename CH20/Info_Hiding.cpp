#include <iostream>
using namespace std;

class Point{
private:
	int x, y;
public:
	bool setX(int _x){
		if (_x < 0 || _x > 100) {
			cout << "X ��ǥ ���� ����." << endl;
			return false;
		}
		x = _x;
		return true;
	}
	bool setY(int _y){
		if (_y < 0 || _y > 100) {
			cout << "Y ��ǥ ���� ����." << endl;
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
		cout << "X, Y ��ǥ�� ? " ; // ��ǥ���� 1~100 ������ ���� �����ϵ��� �Ѵ�.
		cin >> x >> y;
		if (p.setX(x) && p.setY(y)){
			cout << "X, Y = " << p.getX() << " " << p.getY() << endl;
		} else{
			cout << "X, Y �� ���� ���� " << endl;
		}
	}

	return 0;
}