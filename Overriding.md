# Overriding
- Base 클래스에 선언된 멤버와 같은 형태의 멤버를 Derived 클래스에서 선언
- Base 클래스의 멤버를 가리는 효과!
- 보는 시야(Pointer)에 따라서 달라지는 효과!

```cpp
#include <iostream>
using namespace std;

class AAA
{
public:
	void fct()
	{
		cout << "AAA => void fct() called." << endl;
	}
};

class BBB : public AAA
{
public:
	// 메소드 오버라이딩 : 동일한 이름의 함수를 재정의 함.
	void fct()
	{
		cout << "BBB => void fct() called." << endl;
	}
};

int main(void){

  	AAA a1;
  	a1.fct();

  	BBB b1;
  	b1.fct();
    // 메소드가 오버라이딩(재정의)되면 파생클래스의 메소드가 호출된다.
    // 이때 기반 클래스 메소드는 숨겨진다.


  	// 만약 부모의 함수를 호출하고 싶다면, scope resolution operator를 사용한다.
  	b1.AAA::fct();
  	// error
  	// __super 키워드는 클래스 내부에서만 사용이 가능하다.
  	// b1.__super::fct();

  	BBB * b2 = new BBB();
  	b2->fct();
  	b2->AAA::fct();

  	AAA * a3 = b2;
  	// AAA 의 권한을 가지기 때문에
  	// AAA => void fct() called. 출력
  	a3->fct();

  	delete b2;
  	b2 = NULL;
	return 0;
}
```
