#include <iostream>
#include <cstring>
using namespace std;

/*실행결과
My name is kim
My age is 10

My name is Lee
My age is 22
My major is Computer eng.

~Student() called.
~Person() called.
~Person() called.

*/

class Person
{
private:
	char *name;     // 이름
	int age;        // 나이
public:
	Person(char * myname, int myage)
	{
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
		age = myage;

	}
	~Person()
	{
		delete[] name;
		cout << "~Person() called." << endl;
	}
	void ShowPerson() const 
	{
		cout<< "My name is "<<name<<endl;  
		cout<< "My age is "<<age<<endl;
	}
};

class Student : public Person
{
private:
	char * major;     // 전공과목
public:
	Student(char * myname, int myage, char * mymajor)
		: Person(myname, myage)
	{
		major = new char[strlen(mymajor) + 1];
		strcpy(major, mymajor);
	}
	~Student()
	{
		delete[] major;
		cout << "~Student() called." << endl;
	}
	void ShowStudent() const
	{
		//기반클래스 멤버출력 코드추가
		// 아래 두가지 모두 가능하다.
		//__super::ShowPerson();
		ShowPerson();
		
		cout<<"my major is "<<major<<endl<<endl;
	}
};

int main(void)
{
	Person emp("kim", 10);
	emp.ShowPerson();
	cout<<endl;

	Student st1("Lee", 22, "Computer eng.");
	st1.ShowStudent();

	return 0;
};