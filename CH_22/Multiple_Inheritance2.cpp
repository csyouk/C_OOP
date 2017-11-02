#include <iostream>
using namespace std;

class AAA { public: void String(){ cout << "AAA::String() called." << endl;}};

class BBB{ public: void String(){ cout << "BBB::String() called." << endl;}};

class CCC : public AAA, public BBB{
public:
	void ShowString(){
		cout << "CCC::ShowString() called." << endl;
		// method이름의 충돌
		// AAA의 method냐, BBB의 method이냐
		// 다중성의 모호함.
		//String();
		//String();

		// 해결책
		// 접근 지정자를 통해서 명시적으로 부모 클래스를 지정한다.
		AAA::String();
		BBB::String();
	}
};


int main(void){

	CCC c1;
	c1.ShowString();

	c1.AAA::String();
	c1.BBB::String();

	return 0;
}