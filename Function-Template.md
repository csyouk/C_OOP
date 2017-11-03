# Function Template
- 함수 템플릿 : **함수를 만드는 것이 아니라 함수를 정의하는 방법에 관한 사항을 컴파일러에게 알려준다.**
- **컴파일러는 인자의 형을 검사하여 함수를 생성한다.**
- 형은 다양하지만 알고리즘은 동일한 함수를 만들때 유용하다.
  - 이러한 프로그래밍 패러다임을 **generic programming** 이라고 한다.

- template <typename T> : T는 자료형을 결정하지 않겠다. 템플릿으로  정의된 함수의  자료형이 결정되는  시점은  인자가 전달될는 순간이다.

- **템플릿에 대한 정의**는 **반드시 헤더 파일에** 해야 한다.

- 템플릿 코드 기본
- [템플릿 코드 응용 - swap 함수 구현](./CH_29/Function_Template_3.cpp)

```cpp
#include <iostream>
using namespace std;

//double Add(double x, double y) { return x + y; }

// 함수 템플릿을 사용하여 템플릿 함수가 만들어졌다.
// 함수의 생성은 컴파일러에게 있다.
// template은 컴파일러에게 함수를 정의할 것을 알린다.
// T는 자료형을 결정짓지 않겠다.
// 자료형이 결정되는 시점은 인자가 전달될 때이다.
template<typename T>
T Add(T x, T y){
	cout << "T Add(T x, T y)" << endl;
	return x + y;
}

int Add(int x, int y) {
	cout << "int Add(int x, int y)" << endl;
	return x + y;
}

template<typename T1, typename T2>
T1 Add2(T1 x, T2 y){ return x + y; }

template<typename T1, typename T2>
void ShowData(T1 arg1, T2 arg2) { cout << arg1 << "," << arg2 << endl; }

int main(void){

	// 묵시적으로 데이터의 타입을 확인후 템플릿 함수를 생성한다.
	cout << Add(10, 20) << endl;
	cout << Add(10.1, 20.2) << endl;
	ShowData(10, 'A');
	ShowData(2.3, 100);
	ShowData("multi", "campus");

	// 명시적으로 데이터의 타입을 확인후 템플릿 함수를 생성.
	cout << Add<int>(10, 20) << endl;
	cout << Add<double>(10.1, 20.2) << endl;
	ShowData<int,char>(10, 'A');
	ShowData<double,int>(2.3, 100);
	ShowData<char *, char *>("3.8", " 데이터");

	// 하지만, 묵시적으로 함수를 호출시, 일반함수에 대한 우선순위가 더 높다.
	cout << Add(10, 20) << endl;
	// 하지만, 명시적으로 템플릿 함수를 호출시에는 템플릿 함수를 호출한다.
	cout << Add<int>(10, 20) << endl;
	return 0;
}
```

## 함수 템플릿의 특수화
- 템플릿의 매개변수에 따라 선택하게 하는 기법

```cpp
#include <iostream>
using namespace std;

template<typename T>
int SIZEOF(T x){ return sizeof(x); }

// 함수 템플릿 특수화
// 물론 이 경우에는 일반함수를 만들어도 된다. 단지, 문법을 보여주기 위한 예시일 뿐.
template<>
int SIZEOF<char*>(char * x){ return strlen(x); }

int main(void){

	int num = 100;
	double dnum = 3.5;
	char * str = "123456789";

	cout << "SIZEOF(num) :" << SIZEOF(num) << endl;
	cout << "SIZEOF(num) :" << SIZEOF(dnum) << endl;
	cout << "SIZEOF(num) :" << SIZEOF(str) << endl;

	cout << "SIZEOF(num) :" << SIZEOF<int>(num) << endl;
	cout << "SIZEOF(num) :" << SIZEOF<double>(dnum) << endl;
	cout << "SIZEOF(num) :" << SIZEOF<char*>(str) << endl;

	return 0;
}
```


## 함수 템플릿과 클래스 템플릿
- 함수는 호출될때, 데이터의 타입을 찾아서 함수를 호출하지만,
- 클래스는 객체가 생성되어야하므로, 생성시 명시적으로 데이터의 타입을 넘겨줘야 한다.
- 그래서 다음과 같은 코드의 차이가 생긴다.

```cpp
// 함수 템플릿은 묵시적, 명시적 방법의 호출을 허가한다.
cout << Add(10, 20) << endl;
cout << Add<int>(10, 20) << endl;

// 클래스 템플릿은 명시적 방법의 생성이 필요하다.
Point<int> p1(10, 10);
```
