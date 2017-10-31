#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 20;

class Person
{
private:
	// char name[SIZE]�� ������ ���α׷��� ����. 
	// ������ overflow�� �޸� ħ���� ������ �ִ�. (���α׷��� ������ ���� �ʷ�)
	// ���� ������ ������ �ٲ۴�.
	char *name; 
	char *phone;
	int age;
public:
	Person();
	Person(char *, char *, int);
	void ShowData();

	~Person();
};

void Person::ShowData(){
	cout << name << "," << phone << "," << age << endl;
}

Person::Person(){
	strcpy(name, "No Name");
	strcpy(phone, "No Phone");
	age = 0;
}
Person::Person(char * _name, char * _phone, int _age){
	// ���� ������ ���ڿ��� �ּҸ� �����Ų��.
	//name = _name;  // �̷������� �ϸ� �ȵȴ�. ��ü�� �� ������ �������� ����� �Ѵ�.

	// heap�� ������ p1 �޸��� ������ �����͸� ä����� �Ѵ�.
	name = new char[strlen(_name)+1];
	strcpy(name, _name);
	phone = new char[strlen(_phone) + 1];
	strcpy(phone, _phone);
	age = _age;
}

Person::~Person(){
	// �Ҹ��ڿ����� �����ڿ��� heap�� ������ ���ڿ��� ȸ���ؾ� �Ѵ�.
	// ���ڿ��� ȸ������ ���ϸ�, memory leak�� �߻��Ѵ�.
	cout << "Person " << name << " instance destroyed." << endl;
	delete[] name;
	delete[] phone;
}
int main(void){

	Person p1 = Person("kai", "010-2323-3030", 38);
	p1.ShowData();

	return 0;
}