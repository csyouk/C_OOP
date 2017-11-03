#include <typeinfo>
using namespace std;

class A
{
public:
	virtual void Func() {}
};

class B : public A
{
};

class C : public B
{
};

int main()
{
	// C 객체를 생성해서 A*에 담는다.
	A* pa1 = new C;

	// A 객체를 생성해서 A*에 담는다.
	A* pa2 = new A;

	// pa1을 C* 타입으로 형변환시킨다.
	C* pc1 = dynamic_cast<C*>( pa1 );	// 성공

	// pa2를 C* 타입으로 형변환시킨다.
	C* pc2 = dynamic_cast<C*>( pa2 );	// 실패 : NULL 반환

	try
	{
		// *pa2를 C& 타입으로 형변환시킨다.
		C& rc1= dynamic_cast<C&>( *pa2);	// 실패 : bad_cast 예외 발생
	}
	catch(bad_cast& e)
	{
	}

	return 0;
}
