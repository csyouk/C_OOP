#include <iostream>
#include <cstring>
using namespace std;

class Person{
private:
	char name[20];
	int age;
	int count;
public:
	// : age(_age) is colon initializer
	Person(char * _name, int _age) : age(_age)
	{ 
		count = 1;
		strcpy(name, _name);
		cout << count++ << " 번째 Person객체 생성." << endl;
	}
	void ShowData(){
		cout << name << ", " << age << endl;
	}
};

int main(void){

	Person p1("kim", 20);
	p1.ShowData();

	Person p2("lee", 20);
	p2.ShowData();
	return 0;
}