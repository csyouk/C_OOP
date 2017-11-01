#include <iostream>
using namespace std;

class Person
{
// �⺻�� private�� �����ϰ� �����Ѵ�.
// protected�� ����� ��Ӱ��迡�� �ľ��ؾ� �Ѵ�.
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

// ��� ��Ű�� ��� ": public Person"
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
		// private����� name�� age�� ������ �Ұ��� ������,
		// protected�� ����� , name�� age�� ���� ������ �����ϴ�.
		// ��� ���� Ŭ���������� publicó�� ����� �� �ְ� �ȴ�.
		// ������, ���� ���п� ���谡 �Ͼ�� �ȴ�.
		// ���� ���������� ��뼺�� ���� ���� �ƴϴ�.
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
		cout << "���� : " << major << endl;
	}
};

int main(void){

	Student s1("kim", 23, "computer science");
	s1.ShowData();

	Student s2;
	s2.ShowData();
	return 0;
}
