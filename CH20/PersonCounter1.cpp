#include <iostream>
#include <cstring>
using namespace std;

int g_count = 1;


class Person{
private:
	char name[20];
	int age;
	static int count; // �������
public:
	// : age(_age) is colon initializer
	Person(char * _name, int _age) : age(_age){ 
		strcpy(name, _name);

		// �������� ���� ���. :: �����ڸ� �ٿ���� �Ѵ�.
		//cout << ::g_count++ << " ��° Person��ü ����. " ;

		cout << count++ << " ��° Person��ü ����. ";
	}
	
	void ShowData(){
		cout << name << ", " << age << endl;
	}

	static void Counter(){ // �����Լ�
		cout << "count : " << count << endl;
	}
};
// ���������� �ʱ�ȭ�� �ݵ�� Ŭ���� ���� �Ŀ� �ؾ� �Ѵ�.
int Person::count = 1;


int main(void){

	// �����Լ��� ȣ���� ��ü������ �����ϰ� ȣ���� �� �ִ�.
	Person::Counter(); 

	Person p1("kim", 20);
	p1.ShowData();

	Person p2("lee", 20);
	p2.ShowData();

	Person p3("rim", 20);
	p3.ShowData();

	// ���� ��ü���� ���� �Լ��� ȣ���� �� �ִ�.
	p3.Counter();

	return 0;
}
