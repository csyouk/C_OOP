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
	// ��ü�� ����Ű�� ���� ���� ����
	// ��� Ŭ�������� ����� ������� ����.
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
	// ��ü �������� ������ ����Ű�� ���(PartTimeStd)�� �������
	// �Ҵ���� ��ü��(s1) ������� ���� �����ϴ�.
	Student * s1 = new PartTimeStd();
	s1->Sleep();
	s1->Study();
	
	cout << "===========================" << endl;

	// Upcasting
	// ��ü�� ������ ����Ű�� ���� �������.
	// ��ü�� �����ϴ� ���̹Ƿ� ��������� ()�� �ٿ��� �Ѵ�.
	Person p4 = Student();
	p4.Sleep();
	// error
	// p4.Study();

	// Downcasting
	//Student * s2 = new Person();

	return 0;
}