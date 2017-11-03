//CopyCon3.cpp
#include <iostream>
#include <cstring>
using namespace std;

class Person{
private:
	char *name;
	char *phone;
	int age;
public:
	void ShowData();
	Person();
	Person(char *_name, char *_phone, int _age);
	Person(const Person &ref);
	void operator=(const Person &);
	~Person()
	{
		cout << "~Person() called." << endl;
		delete[]name;
		delete[]phone;
	}
};

Person::Person()
{
	cout << "default constructor" << endl;
	//name = new char[strlen("noName") + 1];
	//phone = new char[strlen("noPhone") + 1];
	//strcpy(name, "noName");
	//strcpy(phone, "noPhone");
	name = NULL; phone = NULL;
	age = 0;
}
Person::Person(char *_name, char *_phone, int _age)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);

	phone = new char[strlen(_phone) + 1];
	strcpy(phone, _phone);

	age = _age;
}

Person::Person(const Person &ref) //복사생성자
{
	this->name = new char[strlen(ref.name)+1];
	this->phone = new char[strlen(ref.phone) + 1];

	strcpy(this->name, ref.name);
	strcpy(this->phone, ref.phone);

	age = ref.age;
}

void Person::ShowData()
{
	cout << name << ", " << phone << ", " << age << endl;
}

void Person::operator=(const Person & p)
{
	// 이 구문이 없다면, memory leak이 발생한다.
	if (this->name){ delete[] this->name;}
	if (this->phone){ delete[] this->phone;}
	this->name = new char[strlen(p.name) + 1];
	this->phone = new char[strlen(p.phone) + 1];
	strcpy(name, p.name);
	strcpy(phone, p.phone);
	this->age = p.age;
}

int main()
{
	Person p1("kim", "010-001-0001", 20);
	p1.ShowData();

	Person p2(p1);
	p2.ShowData();

	cout << "==========" << endl;
	Person p3;
	// 디폴트 대입연산자가 작동함.
	// Shallow copy가 일어난다.
	// p3.operator=(p1);
	p3 = p1;
	p3.ShowData();
	cout << "==========" << endl;
	
	Person p4("lee", "010-2532-3571", 27);
	p1 = p4;
	p1.ShowData();
	return 0;
}
