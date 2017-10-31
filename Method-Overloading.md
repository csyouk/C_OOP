# Method Overloading
- **Overloading 이란 여러 함수들이 동일한 이름을 사용할 수 있는 기능을 말한다.**
- **이름은 동일하지만, 인자의 종류(시그니처)만 다르다면 이 함수들은 오버로드되었다고 말한다.**
- **여러 함수가 하나의 이름을 사용하기 때문에 그 이름에 과부하(Overload)가 걸린 셈이다.**
- **함수의 시그니처** 란 함수의 원형에서 인자 부분을 의미한다.

## 오버로딩의 이점.
- 동일한 행위를 하는 함수를 정의할때, 함수의 시그니처만 변형시켜서 만들 수 있다.
- 다음은 C에서 ```int``` 타입과 ```float``` 타입의 변수를 받는 함수를 정의하는 방식이다.

```cpp
int max_i(int a, int b);
float max_f(float a, float b);
```

- C++ 에서는 함수 오버로딩을 지원하기 때문에, 아래와 같은 방식으로 정의하는 것이 가능하다.

```cpp
int max(int a, int b);
float max(float a, float b);
```

- C에서는 함수를 구분하는 유일한 구분방식은 identifier였다.
- C++ 에서는 함수의 이름이 같아도, 인자가 다르면 다른 함수로 취급해서 사용할 수 있다.
  - 이러한 특징을 Method Overloading이라고 한다.
- identifier가 같으나, 인자의 형식이 다른 함수는 다른 함수로 본다.
- 그러나, identifier와 인자의 형식이 동일하나 return value가 다른 함수는 서로 다른 함수로 취급한다.

```cpp
int MyFunc(char); // 1
int MyFunc(int);  // 2
void MyFunc(int); // 3
```

즉, 1번과 2번은 서로 다른 함수이나, 2번과 3번은 동일한 함수로 취급한다는 뜻이다.


## Rule of Overloading
- 어떤 함수를 호출할지 결정하는 규칙
- 반환 값만 틀린 경우는 오버로드 할 수 없다.(오버로딩은 함수의 시그니처에 의해서만 구분된다.)
- 시그니처가 다르더라도 오버로드할 수 없는 경우.
- 적당한 함수를 찾는 순서.

- 오버로딩 규칙에 의해서 우선순위가 가장 높은 함수를 호출하는 규칙은 다음과 같다.
  - Exact Match (정확하게 일치하는 경우)
  - Promotion (승진에 의한 형변환)
  - Standard Conversion (표준 형변환)
  - User-Defined Conversion (사용자에 의한 형변환)

- 다음의 예제 코드를 보자.

```cpp
#include <iostream>
using namespace std;

void MyFunc(void){
	cout << "MyFunc() invoked!" << endl;
}

void MyFunc(char ch){
	cout << "MyFunc(char " << ch << ") invoked!" << endl;
}

int MyFunc(int num){
	cout << "MyFunc(int " << num << ") invoked!" << endl;
	return num + 100;
}

void MyFunc(double x, int y){
	cout << "MyFunc(double x " << x << ", int " << y <<") invoked!" << endl;
}

int main(void)
{

	MyFunc();
	MyFunc('A');
	MyFunc(101);
	MyFunc(3.14, 200);
	//MyFunc(7,8,9); // error, overloaded function not defined

	return 0;
}
```

- 코드에서 보다시피, ```MyFunc```는 시그니처가 다른 형태로 4가지가 선언되어 있다.
- ```MyFunc('A')```는 ```void MyFunc(char ch)```함수를 호출한다.
- ```MyFunc((int)'A')```는 ```int MyFunc(int num)```함수를 호출한다.

## 디폴트 인자
- 함수 호출시, 따로 값을 지정하지 않아도 선택되는 인자의 값이다.
- 디폴트 인자를 사용할때, 다음과 같은 제한이 있다.
- 해당 코드는 디폴트 인자의 사용이 허용되지 않는 코드이다.

```cpp
void DefaultArg(int a=1, int b=2, int c);
void DefaultArg(int a=1, int b, int c=3);
void DefaultArg(int a=1, int b, int c);
```

- 아래의 코드는 디폴트 인자의 사용이 허용되는 경우이다.

```cpp
void DefaultArg(int a=1, int b=2, int c=3);
void DefaultArg(int a,   int b=2, int c=3);
void DefaultArg(int a,   int b,   int c=3);
```

- 디폴트 인자를 정의하는 경우는 인자의 우측부터 채워나가는 경우만 허용된다.

- **디폴트 인자와 오버로딩이 충돌하는 경우, C++은 컴파일을 허락하지 않는다.**
- 아래와 같은 경우, Ambiguous함수는 1을 호출하는가 2를 호출하는가?
- 애매하다. 무엇을 호출할지 모른다. 이런 경우, C++은 컴파일을 호출하지 않는다.

```cpp
void Ambiguous(int a, int b = 100); // 1
void Ambiguous(int a);              // 2
Ambiguous(50);
```

## Name Decoration(Name Mangling)
- 이 규칙을 이해하면 컴퓨터가 내부적으로 오버로딩을 어떻게 다루는지 알 수 있다.
- C++에서는 함수 이름에 대해서 명칭장식을 수행하는데, 예를 들어 아래 2가지 함수가 있다고 하면,

```cpp
void WhichOne(char c);
void WhichOne(int c);
```

- C++은 다음 함수를 아래와 같은 방식으로 변환한다.

```cpp
?WhichOne@@YAXH@Z
?WhichOne@@YAXN@Z
```
