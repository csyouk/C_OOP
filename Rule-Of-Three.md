# Rule of three
- The Rule of Three is a rule of thumb for C++, basically saying
- If your class needs any of
  - **A copy constructor**
  - **An assignment operator**
  - **A destructor**
- defined explictly, then it is likely to need all three of them.

- "3의 규칙"이란 C++의 경험적인 규칙을 일컫는다. 이를 풀어보자면
- 만약 당신이 정의한 클래스가 다음 중 하나가 명시적으로 정의되어 있다면,
  - **복사 생성자**
  - **할당 연산자**
  - **소멸자**
- 나머지들도 전부 정의할 가능성이 높다.

> The reasons for this is that all three of them are usually used to manage a resource, and if your class manages a resource, it usually needs to manage copying as well as freeing.

> If there is no good semantic for copying the resource your class manages, then consider to forbid copying by declaring (not defining) the copy constructor and assignment operator as private.

> (Note that the forthcoming new version of the C++ standard (which is C++11) adds move semantics to C++, which will likely change the Rule of Three. However, I know too little about this to write a C++11 section about the Rule of Three.)
