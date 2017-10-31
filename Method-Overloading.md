# Method Overloading
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
