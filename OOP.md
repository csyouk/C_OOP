# OOP
## 접근 제어 지정자(Access Modifier)
  - public
  - private
  - protected
  - getter/setter를 통해서 멤버 변수 접근, 및 수정.

## Constructor(생성자)
- 객체 생성 시 반드시 한번 호출되는 함수.
- 클래스와 같은 이름의 함수다.
- 리턴형이 없으며 리턴 하지도 않는다.
- 생성자를 호출하는 여러가지 방법.

```cpp
class Point{
private:
	int x, y;
public:
	Point(int _x=0, int _y=0);
	~Point();
	void ShowData();
};

Point p1;
Point p2(100,200);
Point p3 = Point(50, 60);
Point p4(); // 객체 생성이 아님. 함수의 원형으로 이해한다.
Point p5(300); // default argument가 지정되어 있을때에만 가능한 생성방식.
```

## Destructor(소멸자)

## Converting Constructor(변환 생성자)
  - explicit

## Abstract Class(ABC, 추상화 클래스)
  - C++에서는 클래스의 명세만을 적어놓은 클래스가 존재한다.
  - 이는 마치, java의 interface와 비슷하다.
  - C++에서는 멤버와 함수의 원형만 정의한다.
  - 함수의 구현은 분리해서 구현한다.

- 아래 코드는 ABC의 예이다.

```cpp
class Person{
private:
	char name[SIZE];
	char phone[SIZE];
	int age;
public:
	Person();
	void ShowData();
	void SetData(char * _name, char * _phone, int _age);
	void SetName(char * _name);
	void SetPhone(char * _phone);
	void SetAge(int _age);
	~Person();
};
```

- 아래 코드는 Person 클래스의 메소드의 구현체이다.

```cpp
void Person::SetName(char * _name){
	strcpy(name, _name);
}
void Person::SetPhone(char * _phone){
	strcpy(phone, _phone);
}
void Person::SetAge(int _age){
	age = _age;
}
void Person::SetData(char * _name, char * _phone, int _age){
	SetName(_name);
	SetPhone(_phone);
	SetAge(_age);
}
void Person::ShowData(){
	cout << name << "," << phone << "," << age << endl;
}
Person::~Person(){
	cout << "Person instance destroyed." << endl;
}
Person::Person(){

}
```
