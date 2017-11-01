# Const
- const 키워드는 키워드가 가리키는 것 바로 앞의 데이터 타입을 상수화한다.
- 값의 변경을 금한다.
- const 키워드가 맨 앞에 붙으면 기본자료형의 데이터 타입을 상수화한다.
- const키워드는 메소드 오버로딩이 가능하다.

```cpp
#include <iostream>
using namespace std;

int main(void){

	int x = 100, y = 200;
	int *p1 = &x;

	*p1 = 150;
	p1 = &y;

	cout << "*p1: " << *p1 << endl;

	const int * p2 = &x;
	//*p2 = 150;// 불가
	p2 = &y;
	cout << "*p2 : " << *p2 << endl;

	// p3 포인터를 상수화
	int * const p3 = &x;
	*p3 = 170;
	//p3 = &y; //불가
	cout << "*p3 : " << *p3 << endl;

	const int * const p4 = &x;
	//*p4 = 100;
	//p4 = &y;
	cout << "*p4 : " << *p4 << endl;

	return 0;
}
```



## 클래스에서 const로 지정된 멤버를 초기화 시키는 방법
- 멤버 이니셜라이저를 통해서 클래스 멤버의 값을 초기화 시킨다.
- **:** 콜론 초기화.

```cpp
	// id(_id)를 멤버 이니셜라이즈 라고 부른다.
	Student(int _id, char * _name, char * _major) : id(_id)
	{
		strcpy(name, _name);
		strcpy(major, _major);
	}
```


## 상수화된 메소드의 행위.
- 메소드를 상수화 시키려면, 메소드 선언 뒤에 const를 붙인다.
- const를 붙인 메소드는 구현부에서 멤버의 수정이 불가하다.

```cpp
void ShowData() const
{
  cout << "| " << id << " | " << age << " | " << name << " | " << major << " | " << endl;
  //age = 30; // 상수화된 메서드에서는 멤버의 수정이 불가하다.
}
```

- **상수화된 메소드는 상수화된 메소드밖에 부를 수 없다.**

```cpp
void ShowIntro(){
	cout << "| " << id << " | " << age << " | " << name << " | " << major << " | " << endl;
}

void ShowData() const
{
	//ShowIntro(); // 불가하다 상수화된 메소드는 상수화된 메소드밖에 부를 수 없다.
	cout << "| " << id << " | " << age << " | " << name << " | " << major << " | " << endl;
	//age = 30; // 상수화된 메서드에서는 멤버의 수정이 불가하다.
}
```

- **상수화된 주소는 메소드로 반환 불가하다.**
- **궂이 주소를 보내고 시다면, 상수화된 주소를 반환해야 한다.**
- **const**를 받은 쪽에서도 반드시 그 주소를 const로 받아야 한다.

```cpp
// 상수화된 주소는 메소드로 반환 불가하다.
// 궂이 주소를 보내고 시다면, 상수화된 주소를 반환해야 한다.
const char * GetName() const
{  
  return name;
}

// 못받는 이유. 좌측의 변수가 상수화되지 않았기 때문이다.
// 따라서 const키워드를 붙여줘야 한다.
const char *myName = person1.GetName();
```


# Mutable
- 이 키워드가 붙은 멤버는 상수화된 메소드가 해당 멤버를 수정할 수 있게 한다.

```cpp
class Student{
private:
	const int id;
	// 상수화됙 메서드가 이 멤버를 수정할 수 있게 해준다.
	mutable int age;
	char name[20];
	char major[30];
public:
	// id(_id)를 멤버 이니셜라이즈 라고 부른다.
	Student(int _id, int _age, char * _name, char * _major) : id(_id)
	{
		age = _age;
		strcpy(name, _name);
		strcpy(major, _major);
	}

	void ShowIntro() const
	{
		cout << "| " << id << " | " << age << " | " << name << " | " << major << " | " << endl;
	}

	void ShowData() const
	{
		ShowIntro(); //불가하다 상수화된 메소드는 상수화된 메소드밖에 부를 수 없다.

		age = 30;
		cout << "| " << id << " | " << age << " | " << name << " | " << major << " | " << endl;
		//age = 30; // 상수화된 메서드에서는 멤버의 수정이 불가하다.
	}

	// 상수화된 주소는 메소드로 반환 불가하다.
	// 궂이 주소를 보내고 시다면, 상수화된 주소를 반환해야 한다.
	const char * GetName() const
	{  
		return name;
	}
};

int main(void){

	Student person1(1001, 30, "kim", "computer science");
	person1.ShowData();

	// 못받는 이유. 좌측의 변수가 상수화되지 않았기 때문이다.
	// 따라서 const키워드를 붙여줘야 한다.
	const char *myName = person1.GetName();
	cout << "이름 : " << myName << endl;
	return 0;
}
```


# Const객체는 클래스 내부에서 변경이 불가하다.
- const로 선언된 객체는 const로 선언된 함수만 호출 할 수 있다.

```cpp
const AA a2 = AAA(200); <-- 에러.
a2.ShowData();
```
