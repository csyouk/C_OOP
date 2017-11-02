# Abstract-Class
- 추상 클래스: 순수 가상 함수 지니는 클래스
- **추상클래스(Abstract class)란 순수 가상 함수를 포함하고 있는 클래스를 가르켜 추상클래스라 한다.** 추상 클래스는 순수가상 함수를 통해 인터페이스를 제공,  **파생클래스에서 그 인터페이스를 구현한다.**
  - 추상클래스는 body가 없다.
  - 추상클래스의 목적은 구현에 있지 않다. 상속받을 파생클래스들의 메소드 구현에 신경을 쓴다.
  - **추상클래스를 상속받은 파생클래스는 순수가상함수의 구현이 필수이다.**
 
 - 추상클래스의 오브젝트를 생성하는 것은 불가능하다. 그러나 추상클래스의  포인터를 선언하는 것은 가능하다. 추상클래스의 포인터는 흔히 파생클래스의 오브젝트를 가리키게 된다. 파생클래스의 오브젝트를 가리킬 때 그 포인터를  통해 가상함수를 호출하면 파생클래스에서 재정의한 함수가 호출된다.

- 순수가상 함수 재정의 문제 : 순수가상 함수는 사용하기 전에 반드시 재정의 되어야 한다. 만일 기반클래스가 순수가상 함수를 포함하고 있는데, 파생클래스에서 재정의 하지 않으면 파생클래스도 추상 클래스가 된다.  그러면 기반클래스 뿐만 아니라 파생클래스의 오브젝트를 생성하는 것이 불가능하다 .

- 추상 클래스는 객체화될 수 없다.

- 순수 가상함수는 java의 interface와 동일하다.
- 추상클래스는 java의 abstract class와 동일하다.

- [원본 코드](./CH_22/Overriding3.cpp)

```cpp
#include <iostream>
using namespace std;

class AAA{
public:
	// 순수 가상 함수  ( = 0 ) 표시
	// 순수 가상 함수는 body가 없다.
	virtual void fct() = 0;
	void ShowMSG(){ cout << "Multicampus." << endl; }
};

class BBB : public AAA{
public:
	// 순수 가상함수를 부모에서 정의했다면,
	// 자식은 반드시 가상함수를 구현해야 한다.
	void fct(){ cout << "BBB => void fct() called." << endl; }
};

class CCC : public BBB
{
public:
	virtual void fct(){ cout << "CCC => void fct() called." << endl; }
};

int main(void){

	// 추상 클래스 객체는 생성이 불가하다.
	// error
	// AAA * a1 = new AAA();

	// 이런 것은 가능하다.
	AAA * a2 = new BBB();
	a2->fct();      // 자식에서 순수가상함수를 구현한 함수
	a2->ShowMSG();  // 부모로부터 상속받은 메소드

	AAA * a3 = new CCC();
	a3->fct();
	a3->ShowMSG();

	return 0;
}
```

- [원본 코드](./CH_22/ShapeOverriding_EX2.cpp)

```cpp
// 추상 클래스!
class Point
{
protected:
	double xpos, ypos;
public:
	Point()
	{
		xpos = ypos = 0.0;
	}
	Point(double _x, double _y)
	{
		xpos = _x;
		ypos = _y;
	}
	virtual void Draw() const = 0;
};

// 순수 가상함수로 만들면 구현부를 없애야 한다.
//void Point::Draw() const{
//	cout << "[Point] Position = ( " << xpos << ", " << ypos << ")\n";
//}


// 사각형을 상징하는 클래스
class Rectangle : public Point
{
private:
	double width;
	double height;
public:
	Rectangle();
	Rectangle(double, double, double, double);
	void Draw() const;
};
//생성자 정의
Rectangle::Rectangle()
{
	width = height = 100.0f;
}
Rectangle::Rectangle(double x, double y, double w, double h) : Point(x, y){
	width = w;
	height = h;
}
//Rectangle Draw() 메서드 정의
void Rectangle::Draw() const{
	cout << "[Rectangle] Position = ( " << xpos << ", " << ypos << ") Size = ( " << width << ", " << height << ")\n";
}


// 원을 상징하는 클래스
class Circle : public Point
{
private:
	double radius;
public:
	Circle();
	Circle(double, double, double);
	void Draw() const;
};
//생성자 정의
Circle::Circle()
{
	radius = 100.0f;
}
Circle::Circle(double x, double y, double r) : Point(x, y)
{
	radius = r;
}
//Circle Draw() 메서드 정의
void Circle::Draw() const{
	cout << "[Circle] Position = ( " << xpos << ", " << ypos << ") Radius = " << radius << "\n";
}


int main()
{
	Point * p1 = new Rectangle(5, 10, 20, 30);
	Point * p2 = new Circle(5, 10, 20);
	Point * p3 = new Rectangle(15, 10, 14, 25);
	//Point * p4 = new Point(5, 6);

	// Point의 Draw가 아닌 파생 클래스의 Draw함수를 호출하고 싶다면
	// Point의 Draw함수를 virtual로 만들어야 한다.
	// 다형성!.
	// 상속관계에서만 일어난다.
	// 외부에서 보기에는 동일한 메소드를 호출하지만,
	// 서로 다른 작업을 수행하고 있다.
	p1->Draw();
	p2->Draw();
	p3->Draw();
	//p4->Draw();

	return 0;
}
```

- 소멸자에 virtual을 붙여야 하는 이유

```cpp
#include <iostream>
#include <cstring>
using namespace std;

class AAA
{
private:
	char * str1;
public:
	AAA(char * s1)
	{
		str1 = new char[strlen(s1) + 1];
		strcpy(str1, s1);
	}

	// 다형성의 이점을 사용하려면
	// 소멸자에도 virtual을 반드시 붙이는 것이 좋다.
	virtual ~AAA()
	{
		cout << "~AAA() call!" << endl;
		delete[] str1;
	}
	virtual void ShowString(){
		cout << "str1 : " << str1 << ", ";
	}
};

class BBB : public AAA
{
private:
	char * str2;
public:
	BBB(char * _s1, char * _s2) : AAA(_s1)
	{
		str2 = new char[strlen(_s2) + 1];
		strcpy(str2, _s2);
	}

	~BBB()
	{
		cout << "~BBB() call!" << endl;
		delete[] str2;
	}

	virtual void ShowString(){
		AAA::ShowString();
		cout << "str2 : " << str2 << endl;
	}
};


int main(void){

	BBB * b1 = new BBB("hello", "world");
	b1->ShowString();

	delete b1;

	AAA * a1 = new BBB("multi ", "campus");
	a1->ShowString();

	delete a1;

	return 0;
}
```
