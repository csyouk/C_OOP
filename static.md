# static member
- 같은 클래스에서 객체가 생성될 때마다 값을 공유한다.
- main 함수 호출 이전에 메모리 공간에 올라가서 초기화.
  - Data segment에 저장이 되는 변수이다.
- 선언된 클래스의 객체 내에 직접 접근 허용
- static 멤버 초기화문으로 초기화해야 함.
  - 예를 들면 다음 구문과 같이 초기화 해야 한다.
  - ```int Person::count = 1;```
- **생성자에서 값을 할당할 수 없다.**
  - C++의 생성자는 값의 초기화만 전담한다.
  - 즉, 값의 변경은 불가하다.
- 객체의 멤버로 존재하는 것이 아닌, 클래스 내에서 접근할 수 있는 권한이 부여된 것이다. (클래스 전역변수)
- 객체가 소멸되어도 정적변수는  프로세스가  종료되기 까지 메모리에 남겨있다.
  - 데이터 세그먼트에 저장되어 있기 때문에, 프로그램과 라이프 싸이클을 같이 한다.

# static method
- static 키워드를 함수 선언부의 리턴 타입 앞에
- 정적 메소드는 정적 멤버에만 접근할 수 있다.
  - 정적 메소드는 객체의 멤버에 접근이 불가하다.
  - 정적 메소드는 일반멤버 함수를 호출할 수 없다.
- 일반 메소드는 일반멤버, 정적멤버, 정적 메소드 모두 접근 가능하다.


```cpp
#include <iostream>
#include <cstring>
using namespace std;

int g_count = 1;


class Person{
private:
	char name[20];
	int age;
	static int count; // 정적멤버
public:
	// : age(_age) is colon initializer
	Person(char * _name, int _age) : age(_age){
		strcpy(name, _name);

		// 전역변수 접근 방법. :: 연산자를 붙여줘야 한다.
		//cout << ::g_count++ << " 번째 Person객체 생성. " ;

		cout << count++ << " 번째 Person객체 생성. ";
	}

	void ShowData(){
		cout << name << ", " << age << endl;
	}

	static void Counter(){ // 정적함수
		cout << "count : " << count << endl;
	}
};
// 정적변수의 초기화는 반드시 클래스 선언 후에 해야 한다.
int Person::count = 1;


int main(void){

	// 정적함수의 호출은 객체생성과 무관하게 호출할 수 있다.
	Person::Counter();

	Person p1("kim", 20);
	p1.ShowData();

	Person p2("lee", 20);
	p2.ShowData();

	Person p3("rim", 20);
	p3.ShowData();

	// 물론 객체에서 정적 함수를 호출할 수 있다.
	p3.Counter();

	return 0;
}
```
