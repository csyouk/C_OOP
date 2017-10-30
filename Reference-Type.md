**This documnet originally from [here](https://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable-in)**

- A pointer can be re-assigned:
- 포인터 변수는 재할당이 가능하다.

```cpp
int x = 5;
int y = 6;
int *p;
p =  &x;
p = &y;
*p = 10;
assert(x == 5);
assert(y == 10);
```

- A reference cannot, and must be assigned at initialization:
- 참조자는 재할당이 불가능하다.
- 오직 초기화때 할당하는 행위만이 가능하다.

```cpp
int x = 5;
int y = 6;
int &r = x;
```

- A pointer has its own memory address and size on the stack (4 bytes on x86), whereas a reference shares the same memory address (with the original variable) but also takes up some space on the stack.
- 포인터 변수는 자신만의 메모리 주소와 크기를 스택에 가진다. 반면에 참조자는 **동일한 메모리 주소와 값을 원래의 변수** 와 공유 한다.

- Since a reference has the same address as the original variable itself, it is safe to think of a reference as another name for the same variable.
- 참조자는 원래의 변수와 동일한 주소를 가지기 때문에, 같은 변수에 대한 다른 이름이라고 생각해도 된다.

- Note: What a pointer points to can be on the stack or heap. Ditto a reference. A pointer is just a variable that holds a memory address. This variable is on the stack.
- 주의: 포인터가 지시하는 변수는 스택이나 힙에 있을 수 있다. 참조자도 마찬가지이다. 포인터는 단지 메모리의 주소를 가지고 있는 변수에 지나지 않는다. 이 변수가 스택에 있을 뿐이다.

- Since a reference has its own space on the stack, and since the address is the same as the variable it references. This implies that there is a real address of a reference that the compiler will not tell you.
- 참조자는 자신만의 메모리 공간을 스택에 가지고 있고, 참조자 변수가 참조하는 변수의 주소는 참조자 변수의 주소와 동일하다. 이것이 의미하는 바는, 참조자의 진짜 주소는 따로 있는데, 컴파일러가 사용자에게 알려주지 않을 뿐이다.

```cpp
int x = 0;
int &r = x;
int *p = &x;
int *p2 = &r;
assert(p == p2);
```

- You can have pointers to pointers to pointers offering extra levels of indirection. Whereas references only offer one level of indirection.
- 부가적인 레벨의 간접참조 연산자를 지원해주는 포인터를 가리키는 포인터 타입의 포인터를 만들 수 있다. 반면에 참조자는 오직 한단계의 간접참조만 지원한다.

```cpp
int x = 0;
int y = 0;
int *p = &x;
int *q = &y;
int **pp = &p;
pp = &q;//*pp = q
**pp = 4;
assert(y == 4);
assert(x == 0);
```

- Pointer can be assigned nullptr directly, whereas reference cannot.
- 포인터는 NULL포인터를 직접적으로 할당할 수 있다. 반면에 참조자는 그렇게 할 수 없다.

- If you try hard enough, and you know how, you can make the address of a reference nullptr. Likewise, if you try hard enough you can have a reference to a pointer, and then that reference can contain nullptr.
- 물론 온갖 기교를 부리면 널포인터를 가리키는 참조자를 만들 수 있을 것이다.

```cpp
int *p = nullptr;
int &r = nullptr; <--- compiling error
```

- Pointers can iterate over an array, you can use ++ to go to the next item that a pointer is pointing to, and + 4 to go to the 5th element. This is no matter what size the object is that the pointer points to.
- 포인터는 배열을 순회하며 반복하는 것이 가능하다. 사용자는 ++ 연산자를 통해서 포인터가 지시하는 다음 요소로 가는 것이 가능하다. 또한 +4 연산을 통해서 5번째 요소에 가는 것 또한 가능하다. 이런 연산을 할 때 오브젝트의 크기가 어떻든 간에 연산이 가능하다.

- A pointer needs to be dereferenced with * to access the memory location it points to, whereas a reference can be used directly. A pointer to a class/struct uses -> to access it's members whereas a reference uses a **.** .
- 포인터는 * 연산자를 통해서 포인터가 지시하는 메모리 공간을 접근할 수 있다. 반면에 참조자는 직접적으로 사용할 수 있다. 클래스/구조체의 멤버를 접근하려면 **->** 연산자를 사용해야 한다. 반면에 참조자는 **.** 연산자를 사용한다.

- A pointer is a variable that holds a memory address. Regardless of how a reference is implemented, a reference has the same memory address as the item it references.
- 포인터는 메모리 주소를 쥐고 있는 변수다. 참조자가 어떤식으로 구현이 되었든 간에 참조자는 참조자가 참조하는 변수와 동일한 메모리 주소를 가진다.

- References cannot be stuffed into an array, whereas pointers can be.
- 참조자는 배열의 요소로 사용할 수 없다. 반면에 포인터는 배열에 넣을 수 있다.

- Const references can be bound to temporaries. Pointers cannot (not without some indirection):
- **const** 참조자는 임시적으로 묶여있을 수 있다. 반면에 포인터는 불가능하다.(간접참조 없이는 불가하다.)

```cpp
const int &x = int(12); //legal C++
int *y = &int(12); //illegal to dereference a temporary.
```

- This makes const& safer for use in argument lists and so forth.
- 이러한 방식은 **const&** 타입을 인자 리스트로 사용하기 더욱 안전하게 해준다.
