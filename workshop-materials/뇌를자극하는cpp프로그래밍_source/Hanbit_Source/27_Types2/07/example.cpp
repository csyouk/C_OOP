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
	// C ��ü�� �����ؼ� A*�� ��´�.
	A* pa1 = new C;

	// A ��ü�� �����ؼ� A*�� ��´�.
	A* pa2 = new A;

	// pa1�� C* Ÿ������ ����ȯ��Ų��.
	C* pc1 = dynamic_cast<C*>( pa1 );	// ����

	// pa2�� C* Ÿ������ ����ȯ��Ų��.
	C* pc2 = dynamic_cast<C*>( pa2 );	// ���� : NULL ��ȯ

	try
	{
		// *pa2�� C& Ÿ������ ����ȯ��Ų��.
		C& rc1= dynamic_cast<C&>( *pa2);	// ���� : bad_cast ���� �߻�
	}
	catch(bad_cast& e)
	{
	}

	return 0;
}
