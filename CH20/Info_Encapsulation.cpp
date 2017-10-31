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

	void ShowPoint(){ // �������� reference type�� �Ѱܾ� �Ѵ�.
		cout << "x-coord : " << getX();
		cout << " / y-coord : " << getY() << endl;
	}
	void Failure(){
		cout << "X, Y �� ���� ���� " << endl;
	}
};

// ��ǥ ������ PointShowŬ�������� �����ִ� ����� Ʋ�� ���� �ƴϴ�.
// ���� ��������� �ƴ� ���̴�.
//class PointShow{
//public:
//	void ShowPoint(Point & p){ // �������� reference type�� �Ѱܾ� �Ѵ�.
//		cout << "x-coord : " << p.getX();
//		cout << " / y-coord : " << p.getY() << endl;
//	}
//	void Failure(){
//		cout << "X, Y �� ���� ���� " << endl;
//	}
//};

int main(void){
	int x, y;
	Point p;
	//PointShow ps;

	cout << "X, Y ��ǥ�� ? "; // ��ǥ���� 1~100 ������ ���� �����ϵ��� �Ѵ�.
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