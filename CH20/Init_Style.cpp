#include <iostream>
using namespace std;

class AAA
{
private:
	int val;
public:
	AAA(int _val){
	//explicit AAA(int _val){
		val = _val;
	}
	void ShowData(){
		cout << "val : " << val << endl;
	}
};

int main(void){

	int val1 = 10; // C 스타일 초기화
	int val2(20);  // C++ 스타일 초기화, 기본형 모두 class overloading이 되어 있다.

	cout << val1 << "," << val2 << endl;

	AAA a1(100);
	a1.ShowData();

	// C 스타일로 초기화를 하더라도, 
	// 암시적으로 C++ 스타일로 초기화가 된다.
	// AAA a2(200);
	// 하지만, explicit 키워드를 생성자에 적으면, 암시적 변환이 되지 않는다.
	// explicit 사용시 아래 코드는 에러가 난다.
	//AAA a2 = 200; 
	//a2.ShowData();

	return 0;
}
