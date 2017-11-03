# iostream
- 삽입연산자 "<<" 와 추출연산자 ">>"는 기본형에 대해 연산이 가능하도록 이미 라이브러리에 중복 정의되어 있다.

- operator “<<"의 인자는 ostream&, const Pair& 형으로 지정하고 리턴은 ostream& 형으로 지정한다. operator가 "<<" 가 ostream형의 레퍼런스  os를 리턴하는 것은 "<<" 를 연속적으로 사용하기 위함이다.

```cpp
#include <iostream>

namespace myStd{
	char * endl = "\n";
	class ostream
	{
	public:
		ostream & operator<<(char * str)  { printf("%s", str);  return *this; }
		ostream & operator<<(int num)     { printf("%d", num); return *this; }
		ostream & operator<<(double dnum) { printf("%lf", dnum); return *this; }
	};
	ostream cout; // ostream cout 객체 생성
}
using namespace myStd;
int main(void){

	myStd::cout << "hello world" << myStd::endl;
	cout << 100 << endl;
	cout << 3.5 << endl;

	return 0;
}
```

- iostream의 연산자 오버로딩을 정의하면, 사용자가 정의한 클래스 출력도 가능하다.

```cpp
#include <iostream>
using namespace std;
class Point{
private:
	int x, y;
public:
	Point(int x=0, int y=0){ this->x = x; this->y = y; }
	void ShowPos() { std::cout << "Point : " << x << "," << y << endl; }
	friend ostream& operator<<(ostream &, const Point &);
};

ostream & operator<<(ostream & os, const Point & p)
{
	os << "[" << p.x << "," << p.y << "]";
	return os;
}

int main(void){
	Point p1(10, 20);
	// cout.operator<<(p1);
	// 멤버함수로 만들수 없다.
	// 전역함수로 연산자 오버로딩을 정의해야 한다.
	// operator<<(cout, p1); <- friend로 Point에 넣는다.
	cout << p1 << endl;
	return 0;
}
```

- 다음 코드는 istream을 사용자가 정의한 예이다.

```cpp
#include <iostream>
using namespace std;

namespace myStd{
	class istream
	{
	public:
		istream& operator>>(char & ch)  { ch = getchar(); return *this; }
		istream& operator>>(int &n)      { scanf("%d%*c", &n); return *this; }
		istream& operator>>(double &d)  { scanf("%lf%*c", &d); return *this; }
		istream& operator>>(char * str) { gets(str); return *this; }
	};

	istream CIN;
}
using namespace myStd;

int main(void){

	char msg[30], ch;
	int num;
	double dnum;

	cout << "한 문자 입력 ? ";
	CIN >> ch;
	cout << "정수 입력 ? ";
	CIN >> num;
	cout << "실수 입력 ? ";
	CIN >> dnum;
	cout << "문자열 입력 ? ";
	CIN >> msg;

	cout << ch << ", " << num << ", " << dnum << ", " << msg << endl;

	return 0;
}
```

- 다음 코드는 사용자 정의 객체와 라이브러리 함수 객체간의 연산자 오버로딩을 정의한 예이다.

```cpp
#include <iostream>
using namespace std;
class Point{
private:
	int x, y;
public:
	Point(int x = 0, int y = 0){ this->x = x; this->y = y; }
	void ShowPos() { std::cout << "Point : " << x << "," << y << endl; }
	friend istream& operator>>(istream &, Point &);
	friend ostream& operator<<(ostream &, const Point &);
};

istream & operator>>(istream & is, Point & p){
	is >> p.x >> p.y;
	return is;
}
ostream & operator<<(ostream & os, const Point & p){
	os << "[" << p.x << "," << p.y << "]";
	return os;
}

int main(void){
	Point p1;

	cout << "x, y 입력 ? ";
	// cin.operator>>(p1);
	// 마찬가지로 멤버 함수로 만들 수 없으므로,
	// 전역 함수로 만든다.
	// operator(cin, p1);
	cin >> p1;
	cout << p1;


	return 0;
}
```
