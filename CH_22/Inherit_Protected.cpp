#include <iostream>
using namespace std;

class Person
{
// 기본은 private과 동일하게 동작한다.
// protected의 기능은 상속관계에서 파악해야 한다.
protected:
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
	Student(){}
	Student(char * name, int age, char * major) : Person(name, age)
	{
		strcpy(this->major, major);
	}
	void ShowData(){
		// private선언시 name과 age는 접근이 불가능 했으나,
		// protected로 만들시 , name과 age는 직접 접근이 가능하다.
		// 상속 받은 클래스에서는 public처럼 사용할 수 있게 된다.
		// 하지만, 정보 은닉에 위배가 일어나게 된다.
		// 따라서 실질적으로 사용성이 많은 편은 아니다.
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
		cout << "전공 : " << major << endl;
	}
};

int main(void){

	Student s1("kim", 23, "computer science");
	s1.ShowData();

	Student s2;
	s2.ShowData();
	return 0;
}
