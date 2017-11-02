# Multiple-Inheritance
- 파생 클래스가 둘 이상의 기반클래스를  상속하는 것을 말한다.
- 다중상속은 클래스의  관계가 복잡해지고  관리하기 어렵기 때문에 득보다는 실이 더 큰 문법이다.

## Diamond problem
- 다중 상속을 받은 파생 클래스에서 부모의 메소드를 호출하려고 할 때,
- 어느 부모의 메소드를 호출할 것인가? 는 해결하기 어려운 문제이다.

```cpp
#include <iostream>
using namespace std;

class AAA
{
public:
	void String(){ cout << "AAA::String() called." << endl;}
};

class BBB
{
public:
	void String(){ cout << "BBB::String() called." << endl;}
};

class CCC : public AAA, public BBB
{
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
```
