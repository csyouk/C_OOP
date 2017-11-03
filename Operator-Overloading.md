# Operator Overloading
- 클래스 안에서 연산자의 의미를 새롭게 부여함으로서 클래스의 오브젝트를 마치 기본형의 변수처럼 다룰 수 있도록하는 기능이다. 연산자 중복정의는 연산자 함수를 통하여 구현한다.
- operator 는 이함수가 연산자 함수임을 나타내는 키워드다.

- 멤버 함수에 의한 연산자 오버로딩 : 연산자 함수가 사용자가 정의한 클래스 내의 멤버 함수에 의해 정의되고 호출되는 것.
  - P1+p2;  p1.Operator+(p2);

- 전역 함수에 의한 연산자 오버로딩 : 연산자 함수가 사용자가 정의한 전역함수에 의해 정의되고 호출되는 것.
  - friend 함수를 사용해서 private 멤버에 접근해야 한다.
  - 함수의 첫 번째 인자가 *this가 될 수 없는 함수를 friend 함수 로 구현한다.
  - P1+p2; Operator+(p1,p2);

##  연산자 오버로딩의 주의 사항
- 연산자 우선 순위와 결합성은 유지된다.
- 디폴트 매개변수 설정이 불가능하다.
- 디폴트 연산자들의 기본 기능 변경 불가

```cpp
int operator+(int a, int b)  	// 정의 불가능한 함수
{
    return a+b+3;  //원래의 기능을 훼손한다,
}

```

- 다음은 연산자 오버로딩을 통해 Point 클래스를 정의한 예이다.

```cpp
#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int, int);
	Point operator+(const int);
	Point operator+(const Point & );
	Point operator-(const Point & );
	Point operator*(const Point & );
	Point operator<<(const int );
	Point operator>>(const int );
	Point& operator+=(const Point & );
	Point& operator-=(const Point & );
	bool operator!=(const Point & );
	bool operator==(const Point & );
	void operator++(void);
	void ShowPos();
};

Point::Point(int x = 0, int y = 0)
{
	this->x = x; this->y = y;
}
Point Point::operator+(const Point & right)
{
	Point tmp;
	tmp.x = this->x + right.x;
	tmp.y = this->y + right.y;
	return tmp;
}

Point Point::operator*(const Point & right)
{
	Point tmp;
	tmp.x = this->x * right.x;
	tmp.y = this->y * right.y;
	return tmp;
}
void Point::operator++(void)
{
	this->x++; this->y++;
}
Point Point::operator-(const Point & right)
{
	Point tmp;
	tmp.x = this->x - right.x;
	tmp.y = this->y - right.y;
	return tmp;
}
Point Point::operator<<(const int shift)
{
	Point tmp;
	tmp.x = this->x << shift;
	tmp.y = this->y << shift;
	return tmp;
}

Point Point::operator>>(const int shift)
{
	Point tmp;
	tmp.x = this->x >> shift;
	tmp.y = this->y >> shift;
	return tmp;
}

bool Point::operator==(const Point & right)
{
	if (this->x == right.x && this->y == right.y)
		return true;
	else
		return false;
}

bool Point::operator!=(const Point & ref)
{
	return !(*this == ref);
}

Point& Point::operator+=(const Point & ref)
{
	this->x += ref.x;
	this->y += ref.y;
	return *this;
}
Point& Point::operator-=(const Point & ref)
{
	this->x -= ref.x;
	this->y -= ref.y;
	return *this;
}

void Point::ShowPos()
{
	cout << "Point : " << x << "," << y << endl;
}


int main(void){

	Point p1(3, 4);
	p1.ShowPos();

	// 컴파일러는 아래식을 다음과 같이 해석한다.
	// p1.operator + (10)
	Point p2 = p1 + 10;
	p2.ShowPos();

	Point p3 = p1 + p2;
	p3.ShowPos();


	Point p4 = p2 * p3;
	p4.ShowPos();

	Point p5 = p4 << 10;
	p5.ShowPos();

	Point p6 = p5 >> 10;
	p6.ShowPos();

	Point p7 = p5 - p6;
	p7.ShowPos();
	p7++;
	p7.ShowPos();

	if (p1 == p2)
		cout << "Equal" << endl;
	else
		cout << "Not Equal" << endl;

	if (p1 != p2)
		cout << "Not Equal" << endl;
	else
		cout << "Equal" << endl;

	return 0;
}
```

## 단항 연산자 오버로딩
- 단항 연산자에서 전치 연산과 후치 연산은 이름도 같고 피연산자의 수도 같기 때문에 동일하게 해석한다

```cpp
(p1++).ShowPosition();    =>  p1.operator++ ()
(++p2).ShowPosition();    =>  p1.operator++ ()
```

- ++, -- 를 중복정의할 때에는 전위형과 후위형에 따라 연산자 함수를 다르게 만들어야 한다.
- 전위형 연산자 함수는 인자를 갖지 않지만, 후위형 연산자 함수는 int형  인자를 갖는다.
- 후위형 연산자 함수가 인수를 갖는 것은 전위형 연산자 함수와 구별하기 위함이지 실제 그 인수가 사용되는 것은 아니다.

```cpp
++p   ->   p.operator++();  
p++   ->   p.operator++(int);
```

- 다음은 전치 연산자를 정의한 예시이다.
- 전치 연산의 정의는 반드시, 연산의 결과를 reference 형태로 만들어야 한다.

```cpp
#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int x, int y){ this->x = x; this->y = y; }
	void ShowPos() { cout << "Point : " << x << "," << y << endl; }
	Point & operator++(){ x++; y++; return *this; }
	Point & operator--(){ x--; y--; return *this; }
};

int main(void){

	Point p1(1, 2);
	p1.ShowPos();
	// 단항연산자는 p1.operator++(); 로 해석된다.
	++p1;
	p1.ShowPos();

	// 단항연산자는 p1.operator--(); 로 해석된다.
	--p1;
	p1.ShowPos();

	// return 타입을 *this로 만들면 연속적인 계산이 가능하다.
	++(++(++p1));
	p1.ShowPos();

	(++(++(++p1))).ShowPos();
	return 0;
}
```

- 다음은 후치 연산자를 정의한 예시이다.
- 후치 연산의 정의는 반드시, 연산의 결과를 copy value 형태로 만들어야 한다.

```cpp
#include <iostream>
using namespace std;
class Point{
private:
	int x, y;
public:
	Point(int x, int y){ this->x = x; this->y = y; }
	void ShowPos() { cout << "Point : " << x << "," << y << endl; }
	Point operator++(int){
		Point tmp(x++, y++);
		return tmp;
	}
	Point operator++(){
		x++; y++;
		return *this;
	}
	friend Point operator--(Point &, int);
};

// 전역함수 연산자 오버로딩은 클래스에 추가시
// friend 키워드를 추가해야 한다.
// 그래야 private에 접근이 가능하다.
Point operator--(Point & p, int)
{
	Point tmp(p.x--, p.y--);
	return tmp;
}

int main(void){

	Point p1(1, 1);
	p1.ShowPos();

	cout << "Point p2 = p1++;" << endl;
	// 후치 연산은 p1.operator++(); 과 같이 처리된다.
	// 후치 연산은 연산의 전과 후가 값이 달라야 한다.
	Point p2 = p1++; // p1.operator++(int);
	p1.ShowPos(); // 2,2
	p2.ShowPos(); // 1,1
	cout << "============================================" << endl;

	Point p3(1, 1);  // p3.operatpr++();
	Point p4 = ++p3;
	p3.ShowPos(); // 2,2
	p4.ShowPos(); // 2,2
	cout << "============================================" << endl;

  Point p5(3, 3);
	// p5.operator--(int);  // 멤버함수 연산자 오버로딩.
	// operator--(p5, int); // 전역함수 연산자 오버로딩.
	Point p6 = p5--;

	p5.ShowPos(); // 2,2
	p6.ShowPos(); // 3,3
  cout << "============================================" << endl;

  Point p7(5, 5);
  // 전치 연산자를 전역함수로 구현해 보자.
  // 멤버일 경우는 p7.operator--();
  // 전역일 경우는 operator--(p7);
  Point p8 = --p7;
  p7.ShowPos(); // 4,4
  p8.ShowPos(); // 4,4
	return 0;
}
```
