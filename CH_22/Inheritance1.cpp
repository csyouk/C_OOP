#include <iostream>
using namespace std;

class Person
{
private:
	char name[20];
	int age;
public:
	Person()
	{}

	char * GetName(){
		return name;
	}
	int GetAge(){
		return age;
	}

	void SetName(){
		
	}
	void SetAge(){
		
	}
};

// ��� ��Ű�� ��� ": public Person"
class Student : public Person
{
private:
	char major[30];
public:
	Student(char * _major)
	{
		strcpy(major, _major);
	}
	void ShowData(){
		cout << "�̸� : " << GetName() << endl;
		cout << "���� : " << GetAge() << endl;
		cout << "���� : " << major << endl;
	}
};

int main(void){

	Student s1("computer science");

	s1.ShowData();

	return 0;
}