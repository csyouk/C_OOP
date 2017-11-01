# this
- 자기 자신을 가르키는  용도로 사용되는 포인터이다, 자기참조 포인터라 한다.
- this는 멤버함수를  호출한 오브젝트를  가르키는  포인터로 컴파일러에 의해 자동적으로 제공된다.(this 는 멤버함수 내에서만 사용할 수 있다)
- this 포인터를 반환한다면  함수 반환형은 \*class 형 이여야 한다.
- 연산자 오버로딩에 주로 사용된다.

- **this** 는 객체의 멤버로서만 사용할 수 있다.

```cpp
#include <iostream>
using namespace std;

class Person{
private:
	int age;
public:
	Person() : age(0) {}
	void GetThis(){
		cout << "GetThis() this : " << this << endl;
	}
	Person * GetThis2(){
		return this;
	}
	Person & GetThis3(){
		this->age = 23;
		return *this;
	}
	Person & smile1(){
		cout << "[ㅇㅅㅇ]";
		return *this;
	}
	Person * smile2(){
		cout << "[ㅎㅅㅎ]";
		return this;
	}
	void ShowData(){
		cout << age << endl;
	}
};

int main(void){

	cout << "p1의 정보. : " << endl;
	Person * p1 = new Person();
	cout << "p1 : " << p1 << endl;

	p1->smile1().smile2()->smile1().smile1().smile2();

	cout << endl;
	p1->GetThis();

	// p1과 p2는 메모리는 다르다.
	// 하지만 동일한 값을 가지고 있다.
	// 그렇다고 동일한 값을 가르키고 있다는 뜻은 아니다.
	Person p2 = p1->GetThis3();
	p2.ShowData();
	p1->ShowData();

	delete p1;
	//delete p2; // error, stack에 생성된 변수이기 때문.
	return 0;
}

```
