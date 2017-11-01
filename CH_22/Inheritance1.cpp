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

// 상속 시키는 방법 ": public Person"
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
		cout << "이름 : " << GetName() << endl;
		cout << "나이 : " << GetAge() << endl;
		cout << "전공 : " << major << endl;
	}
};

int main(void){

	Student s1("computer science");

	s1.ShowData();

	return 0;
}