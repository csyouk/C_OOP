# C++ 특징

## Reference-Type 지원

## 범위 해결 연산자를 통한 네임스페이스 제공.
- Scope Resolution Operator **::**

## inline 키워드를 통한 클래스 멤버 함수의 구현
- inline키워드를 클래스 멤버 함수 정의 앞에 붙이면, 인라인 함수로 사용가능하다.
- inline 함수를 사용해서, ABC 클래스 멤버를 정의한다면, 해당 구현체는 헤더파일에 넣어야 한다.(왜 헤더파일인가? ABC클래스는 클래스의 interface에 해당하는데, 이는 헤더파일에 넣을 요건에 충족된다.)

```cpp
// Door.h
const int OPEN = 1;
const int CLOSE = 2;

class Door{
private:
	int state;

public:
	inline void Open();
	void Close();
	void CurrentState();
};

// 왜 인라인 함수를 헤더파일에 구현해야 하는가?
/*
이유는 main() 에서 Open 메서드 호출 시
함수부분으로 실행코드가 대치가 일어나는데
이때 Door.cpp를 참조할 수 없다.
이유는 컴파일을 소스마다 각각 일어나기 때문이다.
따라서 인라인 함수는 헤더파일에 주어 참조하게 한다.
*/

inline void Door::Open()
{
	state = OPEN;
}
```

## 네임 스페이스 제공
- **namespace** 라는 키워드를 사용해서 독립적인 메모리 공간을 제공하여, 함수 혹은 변수의 identifier가 겹친다고 하더라도, 네임스페이스가 다르면, 충돌이 일어나지 않는다.

## C++에서 C관련 라이브러리 포함 시키기
- 예를 들어서 strcpy 함수를 사용하고 싶다면, string.h파일을 include시켜야 한다.
- c++에서 c라이브러리 파일을 사용할때에는 **.h** 를 빼고 접두사로 c를 붙여준다.

```cpp
#include <cstring>
```

## 구조체 내에 함수 정의
- **C 에서는 불가하다.** 궂이 함수내에서 정의를 하고자 한다면, 함수 포인터를 구조체의 멤버로 정의해서 사용하는 방법이 있다.
- 하지만, **C++에서는 가능하다.** 구조체내에서 함수를 정의한 후, 사용하는 것이 가능하다.

## 기본 자료형으로서의 구조체
- **C에서는 typedef를 통해서 사용자 정의 자료형을 만들지 않는 이상**, struct는 기본 자료형이 아니다.
- **C++에서 구조체는 기본 자료형이다.**

## new/delete키워드를 통한 힙공간에 객체 생성.
- **new** 키워드를 통해서 힙 공간에 메모리를 확보한 후, 주소를 변수에 담을 수 있다.
- **delete** 키워드를 통해 힙 공간에 할당된 메모리를 삭제 할 수 있다.

```cpp
#include <iostream>
#include <cstring>
using namespace std;

int main(void){

	char * str = new char[50];
	int *num = new int;
	int * nArr = new int[10];

	strcpy(str, "multicampus");

	cout << str << endl;

	*num = 50;
	cout << "*num : " << *num << endl;


	int i;

	for (i = 0; i < 10; i++)
	{
		nArr[i] = i*10 + 100;
	}

	for (i = 0; i < 10; i++)
	{
		cout << nArr[i] << ",";
	}
	cout << endl;

	delete[] str;  // 동적으로 할당받은 배열을 해제시킬 때.
	delete num;
	delete[] nArr;

	// 이미 해제한 메모리를 또 해제하려고 하면 crash가 난다.
	//delete[] str;

	// 해제한 메모리에 값을 넣으려고 하면 이 또한 crash가 난다.
	//strcpy(str, "aaa campus");

	// 권장하는 코딩 컨벤션
	str = NULL;
	num = NULL;
	nArr = NULL;
	return 0;
}
```


## 전역변수 접근 방법
- :: 연산자를 붙여줘야 전역변수에 접근 가능하다.

## this pointer의 지원

## static/mutable

## friend 키워드
