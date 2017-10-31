#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 20;

class Person
{
private:
	char name[SIZE];
	char phone[SIZE];
	int age;
public:
	Person();
	void ShowData();
	void SetData(char * _name, char * _phone, int _age);
	void SetName(char * _name);
	void SetPhone(char * _phone);
	void SetAge(int _age);
	~Person();
};

void Person::SetName(char * _name){
	strcpy(name, _name);
}
void Person::SetPhone(char * _phone){
	strcpy(phone, _phone);
}
void Person::SetAge(int _age){
	age = _age;
}
void Person::SetData(char * _name, char * _phone, int _age){
	SetName(_name);
	SetPhone(_phone);
	SetAge(_age);
}
void Person::ShowData(){
	cout << name << "," << phone << "," << age << endl;
}
Person::~Person(){
	cout << "Person instance destroyed." << endl;
}
Person::Person(){

}

int main(void){

	//Person p1;
	Person * p1 = new Person;
	p1->SetData("kim","010-9570-0404", 20);
	p1->ShowData();

	delete p1;

	return 0;
}