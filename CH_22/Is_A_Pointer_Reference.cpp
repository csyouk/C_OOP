#include <iostream>
using namespace std;

class Person{
public:
	void Sleep() { cout << "Sleep()" << endl; }
};

class Student : public Person{
public:
	void Study(){ cout << "Study()" << endl; }
};

class PartTimeStd : public Student{
public:
	void Work(){ cout << "Work()" << endl; }
};

int main(void){

	PartTimeStd pt;
	Student & ref1 = pt;
	Person & ref2 = pt;

	pt.Sleep(); pt.Study(); pt.Work();
	cout << "===========================" << endl;

	ref1.Sleep(); ref1.Study();
	cout << "===========================" << endl;

	ref2.Sleep();

	return 0;
}