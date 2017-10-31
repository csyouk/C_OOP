#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 20;

class Person
{
private:
	char name[SIZE];
	char phone[SIZE];
	int age;
public:
	Person();
	Person(char *, char *, int);
	void ShowData();
	void SetData(char *, char *, int);
	void SetName(char *);
	void SetPhone(char *);
	void SetAge(int);
	~Person();
};

void Person::SetName(char * _name){
	strcpy(name, _name);
}
void Person::SetPhone(char * _phone){
	strcpy(phone, _phone);
}
void Person::SetAge(int _age){
	age = _age;
}
void Person::SetData(char * _name, char * _phone, int _age){
	SetName(_name);
	SetPhone(_phone);
	SetAge(_age);
}

void Person::ShowData(){
	cout << name << "," << phone << "," << age << endl;
}

Person::~Person(){
	cout << "Person " << name << " instance destroyed." << endl;
}
Person::Person(){
	//cout << "implicit" << endl;
	strcpy(name, "No Name");
	strcpy(phone, "No Phone");
	age = 0;
}
Person::Person(char * _name, char * _phone, int _age){
	SetName(_name);
	SetPhone(_phone);
	SetAge(_age);
}

int main(void){

	//Person p1;
	Person * p1 = new Person("kim", "010-9570-0404", 20);
	p1->ShowData();

	Person p2("cs", "010-3343-2423", 30);
	p2.ShowData();

	Person p3;
	p3.ShowData();

	Person p4 = Person("kai", "010-2323-3030", 38);
	p4.ShowData();

	Person * p5 = new Person(); // 명시적으로 default 생성자를 호출
	p5->ShowData();

	Person * p6 = new Person; // 암시적으로 default 생성자를 호출.
	p6->ShowData();



	delete p1;
	delete p5;
	delete p6;
	return 0;
}