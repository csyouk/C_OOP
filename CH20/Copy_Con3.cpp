#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


class Person
{
private:
	// char name[SIZE]의 장점은 프로그램이 쉽다. 
	// 하지만 overflow로 메모리 침범의 위험이 있다. (프로그램의 잠재적 위협 초래)
	// 따라서 포인터 변수로 바꾼다.
	char *name;
	char *phone;
	int age;
public:
	Person();
	Person(char *, char *, int);
	Person(Person & ref);
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
	// 힙에 생성된 문자열의 주소를 연결시킨다.
	//name = _name;  // 이런식으로 하면 안된다. 객체에 들어갈 정보는 의존성이 없어야 한다.

	// heap에 생성된 p1 메모리의 공간에 데이터를 채워줘야 한다.
	name = new char[strlen(_name) + 1];
	phone = new char[strlen(_phone) + 1];
	strcpy(name, _name);
	strcpy(phone, _phone);
	age = _age;
}
Person::Person(Person & ref){
	// deepcopy
	this->name = new char[strlen(ref.name) + 1];
	this->phone = new char[strlen(ref.phone) + 1];
	strcpy(this->name, ref.name);
	strcpy(this->phone, ref.phone);
	age = ref.age;
}
Person::~Person(){
	// 소멸자에서는 생성자에서 heap에 생성한 문자열을 회수해야 한다.
	// 문자열을 회수하지 못하면, memory leak이 발생한다.
	cout << "Person " << name << " instance destroyed." << endl;
	delete[] name;
	delete[] phone;
}
int main(void){

	Person p1 = Person("kai", "010-2323-3030", 38);
	p1.ShowData();

	Person p2(p1);
	// 사용자 정의 복사 생성자를 정의하지 않으면, 
	// 실행시 프로그램이 죽는다.
	// 그 이유는, p1객체가 삭제되면서 p1의 멤버가
	// 참조하고 있던 name, phone이 소멸되는데, p2가 같은 멤버 변수를 삭제하려고 했을 때
	// 이미 소멸되어 있기 때문에, 소멸시킬 대상이 없다. 
	// 따라서 이 경우 crash가 난다.
	p2.ShowData(); 

	// 사용자 정의 복사 생성자가 없는 경우, 객체를 복사할 때 Shallow Copy라고 한다.
	// 사용자 정의 복사 생성자가 있는 경우, 객체를 복사할 때 Deep copy를 한다.(관례)
	return 0;
}