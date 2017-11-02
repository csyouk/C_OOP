#include <iostream>
using namespace std;

class AAA{
public:
	// 가상함수
	// 실행시 파생클래스 주소로 변경.
	virtual void fct(){cout << "AAA => void fct() called." << endl;}
};

class BBB : public AAA{
public:
	void fct(){cout << "BBB => void fct() called." << endl;}
};

class CCC : public BBB
{
public:
	virtual void fct(){ cout << "CCC => void fct() called." << endl; }
};

int main(void){

	BBB * b1 = new BBB();
	b1->fct();  // Static-Binding

	AAA * a1 = b1;
	a1->fct(); // Dynamic-Binding

	// virtual 키워드가 없을시에는 AAA => void fct() called. 출력
	// virtual 키워드가 있을시에는 BBB => void fct() called. 출력
	// 즉, virtual 키워드가 있는 메소드는 권한이 파생클래스로 변경된다.

	cout << "===========================" << endl;

	BBB * b2 = new CCC();
	b2->fct();  // CCC method 호출. virtual이니까.

	cout << "===========================" << endl;

	AAA * a2 = b2;
	a2->fct(); // CCC 호출.
	// b2가 BBB 타입이지만, b2또한 CCC의 파생클래스이므로
	// CCC의 fct가 호출된다.

	// 특정 클래스의 메소드를 호출하고 싶다면, scope resolution operator를 사용하자.
	b2->AAA::fct(); 
	b2->BBB::fct();

	return 0;
}