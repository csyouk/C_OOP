# friend
- 현재 클래스의 멤버가 아니면서 현재 클래스의 모든 멤버에  접근할 수 있는 함수로 지정자 friend를 갖는다. friend는 선언에 둔다.
- 다른 클래스에서 private 멤버 접근을 허용한다.

```cpp
#include <iostream>
using namespace std;

class Counter
{
private:
	int val;
public:
	Counter() :val(0)
	{}
	void print(){
		cout << "value : " << val << endl;
	}
	friend void SetValue(Counter & , int );
};

void SetValue(Counter & ref, int val){
	// 접근이 안된다.
	// 전역함수에서는 private을 접근할 수 없으니..
	// 하지만 이 함수의 원형을 class에 넣은 후, friend 키워드를 추가하면
	// 아래와 같이 private member에 대한 접근이 가능하다.
	ref.val = val;

	// this 키워드는 사용 불가.
}

int main(void){

	Counter cnt;
	cnt.print();

	SetValue(cnt, 1000);
	cnt.print();
	return 0;
}
```

```cpp
#include <iostream>
using namespace std;

class AAA
{
private:
	int data;
public:
	void ShowData(){
		cout << "Data : " << data << endl;
	}
	friend class BBB;
};

class BBB
{
private:
	int data;
public:
	void SetData(AAA &ref, int _data){
		// BBB class는 AAA class의 private member
		// 에 대한 접근을 허락받는다.
		// friend 키워드는 이러한 접근 제어의 권한을 설정해준다.
		// 하지만 이런 패턴은 잘 쓰이지 않는다.
		ref.data = _data;
	}
};

int main(void){

	AAA a1;
	BBB b1;

	b1.SetData(a1, 500);
	a1.ShowData();

	return 0;
}
```
