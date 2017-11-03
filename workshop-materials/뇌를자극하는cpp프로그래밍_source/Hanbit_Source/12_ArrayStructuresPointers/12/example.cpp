#include <iostream>
using namespace std;

struct Dizzy
{
	int id;	// 구조체 변수마다 갖는 고유한 값
	Dizzy* p;	// Dizzy 구조체를 가리키는 포인터
};

int main()
{
	// Dizzy 객체를 3개 만들고,
	// 서로를 가리키도록 만든다.
	Dizzy a, b, c;
	a.id = 1;
	a.p = &b;
	b.id = 2;
	b.p = &c;
	c.id = 3;
	c.p = &a;

	// a 만 사용해서 a, b, c 모두에 접근한다.
	cout << "a.id = " << a.id << "\n";
	cout << "b.id = " << a.p->id << "\n";
	cout << "c.id = " << a.p->p->id << "\n";
	cout << "a.id = " << a.p->p->p->id << "(again)\n";

	return 0;
}