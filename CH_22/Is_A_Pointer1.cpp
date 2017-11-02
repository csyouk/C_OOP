#include <iostream>
using namespace std;

class Person
{
public:
	Person & Sleep()
	{
		cout << "Sleep()" << endl;
		return *this;
	}
};

class Student : public Person
{
public:
	Student & Study()
	{
		cout << "Study()" << endl;
		return *this;
	}
};

class PartTimeStd : public Student
{
public:
	PartTimeStd & Work()
	{
		cout << "Work()" << endl;
		return *this;
	}
};

int main(void){

	cout << "===========================" << endl;
	Person p1; 
	p1.Sleep();
	cout << "===========================" << endl;
	Student s1;
	s1.Study().Sleep();
	cout << "===========================" << endl;
	PartTimeStd pt1;
	pt1.Work().Study().Sleep();
	cout << "===========================" << endl;
	cout << "===========================" << endl;
	cout << "===========================" << endl;
	cout << "===========================" << endl;
	Person * p2;
	p2 = new Person();
	p2->Sleep();
	cout << "===========================" << endl;
	Student * s2;
	s2 = new Student();
	s2->Study();
	s2->Sleep();
	cout << "===========================" << endl;
	PartTimeStd * pt2;
	pt2 = new PartTimeStd();
	pt2->Sleep();
	pt2->Study();
	pt2->Work();

	return 0;
}