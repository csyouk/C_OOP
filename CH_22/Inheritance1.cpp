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

// ��� ��Ű�� ��� ": public Person"
class Student : public Person
{
private:
	char major[30];
public:
	Student(char * name, int age, char * major)
	{
		SetName(name);
		SetAge(age);
		strcpy(this->major, major);
	}
	void ShowData(){
		cout << "�̸� : " << GetName() << endl;
		cout << "���� : " << GetAge() << endl;
		cout << "���� : " << major << endl;
	}
};

int main(void){

	Student s1("kim", 23, "computer science");

	s1.ShowData();

	return 0;
}