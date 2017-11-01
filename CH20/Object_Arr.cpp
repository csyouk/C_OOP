#include <iostream>
using namespace std;

class Point{
private:
	int x, y;
public:
	Point(){
		cout << "Point() called." << endl;
		x = y = 0;
	}
	~Point(){
		cout << "Point(" << x << "," << y << ") destroyed." << endl;
	}
	void setX(int _x){
		x = _x;
	}
	void setY(int _y){
		y = _y;
	}
	int getX(void){
		return x;
	}
	int getY(void){
		return y;
	}
	void ShowData(void){
		cout << x << "," << y << endl;
	}
};

int main(void){

	// ��ü�迭. ���� �ص� ������ ���ÿ� �ʱ�ȭ�� �ȴ�.
	Point arr[5]; 

	int i;
	for ( i = 0; i < 5; i++){
		arr[i].setX(i * 20); arr[i].setY(i * 40);
	}

	for (i = 0; i < 5; i++){
		cout << arr[i].getX() <<"|"<< arr[i].getY() << endl;
	}

	
	return 0;
}
