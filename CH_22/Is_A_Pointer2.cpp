#include <iostream>
using namespace std;

class Person{
public:
	void Sleep() {cout << "Sleep()" << endl;}
};

class Student : public Person{
public:
	void Study(){cout << "Study()" << endl;}
};

class PartTimeStd : public Student{
public:
	void Work(){cout << "Work()" << endl;}
};

int main(void){

	Person * p1 = new Person();
	p1->Sleep();
	cout << "===========================" << endl;

	// Upcasting
	// 객체가 가르키는 대상과 관계 없이
	// 기반 클래스내에 선언된 멤버에만 접근.
	Person * p2 = new Student();
	p2->Sleep();
	// error
	//p2->Study();

	cout << "===========================" << endl;

	// Upcasting
	Person * p3 = new PartTimeStd();
	p3->Sleep();


	cout << "===========================" << endl;

	// Upcasting
	// 객체 포인터의 권한은 가리키는 대상(PartTimeStd)과 상관없이
	// 할당받은 객체의(s1) 멤버에만 접근 가능하다.
	Student * s1 = new PartTimeStd();
	s1->Sleep();
	s1->Study();
	
	cout << "===========================" << endl;

	// Upcasting
	// 객체의 권한은 가리키는 대상과 상관없다.
	// 객체를 생성하는 것이므로 명시적으로 ()를 붙여야 한다.
	Person p4 = Student();
	p4.Sleep();
	// error
	// p4.Study();

	// Downcasting
	//Student * s2 = new Person();

	return 0;
}