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

	// 객체배열. 선언만 해도 생성과 동시에 초기화가 된다.
	Point * arr[5];

	int i;
	for (i = 0; i < 5; i++){
		arr[i] = new Point();
		arr[i]->setX(i * 20);
		arr[i]->setY(i * 40);
	}

	for (i = 0; i < 5; i++){
		cout << arr[i]->getX() << ", " 
			   << arr[i]->getY() << endl;
	}

	// 이렇게 소멸시킬 수 없다.
	// 왜냐하면 arr는 stack에 생성된 변수일 뿐이다.
	// 소멸시켜야할 대상은 heap에 생성된 객체이다.
	//delete[] arr;

	for (i = 0; i < 5; i++)
		delete arr[i];
	

	for (i = 0; i < 5; i++)
		arr[i] = NULL;
	
	return 0;
}
