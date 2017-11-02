# Virtual
- 가상함수(Virtual) : **실행시** 파생클래스 주소로 변경
  - **실행시** 라는 것이 중요하다.
- **vtable** : 가상함수를 포함한 클래스의 오브젝트를
vtable(virtual function table)과 함께 만들어진다.
vtable은 가상함수에 대한 주소값이 들어있는 포인터 배열이다.
 
- 파생클래스의 오브젝트는 기반클래스의 오브젝트로 부터 vtable을 물려받아 수정, 확장한다. 만일 파생클래스에서 재정의한 가상함수가 있으면 **기반클래스의 가상함수에 대한 포인터가 들어 있던 곳에 파생클래스에서 재정의한 가상함수에 대한 포인터를 넣는다.** 따라서 파생클래스에서 수정한 vtable을 사용하게 되므로 파생클래스에서 재정의된 함수가 호출된다.

- 사용된 오브젝트에 의해 실행코드가  결정되는 함수로 지정자 virtual 을 갖는다. vitual은 선언에 둔다.(가상함수)

- 정적결합 : 함수의 실행코드 결정이 컴파일 시에 이루어 진다.
실행시 속도는 빠르지만 융통성이 적다. 일반 함수 사용.
 
- 동적결합 : 함수의 실행코드 결정이 실행 시에 이루어 진다.
실행 시 속도는 느리지만 융통성이 많다. 가상 함수 사용.
가상함수를 사용하면 실행속도 면에서는 손해를 보지만 실행 시 다형성(runtime polymorphism)이라는 융통성을 갖게 된다


```cpp
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

int main(void){

	BBB * b1 = new BBB();
	b1->fct();  // Static-Binding

  // 객체(b1) 중심으로 메서드를 호출한다.
  // a1은 변수이다.
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
```
