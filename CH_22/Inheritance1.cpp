#include <iostream>
using namespace std;

class Person
{
private:
	char name[20];
	int age;
public:
	Person()
	{
		age = 0;
		strcpy(name, "noName");
	}
	Person(char * name, int age)
	{
		this->age = age;
		strcpy(this->name, name);
	}
	char * GetName(){
		return name;
	}
	int GetAge(){
		return age;
	}

	void SetName(char * name){
		strcpy(this->name, name);
	}
	void SetAge(int age){
		this->age = age;
	}
};

// 상속 시키는 방법 ": public Person"
class Student : public Person
{
private:
	char major[30];
public:
	// 기반 클래스는 기반클래스의 생성을 책임지고
	// 파생 클래스는 파생클래스의 생성을 책임져야 한다.
	Student(char * name, int age, char * major)
		// 방법 1. 부모 생성자를 명시적으로 호출.
		// 흐름 : 부모생성자 호출 -> 자식 클래스 생성자 호출.
		: Person(name, age)
	{
		// 방법2
		//SetName(name);
		//SetAge(age);

		// 방법3
		// 부모 클래스의 메소드를 호출.
		//__super::SetName(name);
		//__super::SetAge(age);
		strcpy(this->major, major);
	}
	void ShowData(){
		cout << "이름 : " << GetName() << endl;
		cout << "나이 : " << GetAge() << endl;
		cout << "전공 : " << major << endl;
	}
};

int main(void){

	Student s1("kim", 23, "computer science");

	s1.ShowData();

	return 0;
}