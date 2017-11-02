#include <iostream>
using namespace std;

class AAA{
public:
	// 순수 가상 함수  ( = 0 ) 표시
	// 순수 가상 함수는 body가 없다.
	virtual void fct() = 0; 
	void ShowMSG(){ cout << "Multicampus." << endl; }
};

class BBB : public AAA{
public:
	// 순수 가상함수를 부모에서 정의했다면,
	// 자식은 반드시 가상함수를 구현해야 한다.
	void fct(){ cout << "BBB => void fct() called." << endl; }
};

class CCC : public BBB
{
public:
	virtual void fct(){ cout << "CCC => void fct() called." << endl; }
};

int main(void){

	// 추상 클래스 객체는 생성이 불가하다.
	// error
	// AAA * a1 = new AAA();

	// 이런 것은 가능하다.
	AAA * a2 = new BBB();
	a2->fct();      // 자식에서 순수가상함수를 구현한 함수
	a2->ShowMSG();  // 부모로부터 상속받은 메소드

	AAA * a3 = new CCC();
	a3->fct();
	a3->ShowMSG();

	return 0;
}