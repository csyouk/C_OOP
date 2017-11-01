#include <iostream>
using namespace std;

class Student{
private:
	const int id;
	// ���ȭ�� �޼��尡 �� ����� ������ �� �ְ� ���ش�.
	mutable int age;
	char name[20];
	char major[30];
public:
	// id(_id)�� ��� �̴ϼȶ����� ��� �θ���.
	Student(int _id, int _age, char * _name, char * _major) : id(_id)
	{
		age = _age;
		strcpy(name, _name);
		strcpy(major, _major);
	}

	void ShowIntro() const
	{
		cout << "| " << id << " | " << age << " | " << name << " | " << major << " | " << endl;
	}

	void ShowData() const
	{
		ShowIntro(); //�Ұ��ϴ� ���ȭ�� �޼ҵ�� ���ȭ�� �޼ҵ�ۿ� �θ� �� ����.

		age = 30;
		cout << "| " << id << " | " << age << " | " << name << " | " << major << " | " << endl;
		//age = 30; // ���ȭ�� �޼��忡���� ����� ������ �Ұ��ϴ�.
	}

	// ���ȭ�� �ּҴ� �޼ҵ�� ��ȯ �Ұ��ϴ�.
	// ���� �ּҸ� ������ �ôٸ�, ���ȭ�� �ּҸ� ��ȯ�ؾ� �Ѵ�.
	const char * GetName() const
	{  
		return name;
	}
};

int main(void){

	Student person1(1001, 30, "kim", "computer science");
	person1.ShowData();

	// ���޴� ����. ������ ������ ���ȭ���� �ʾұ� �����̴�.
	// ���� constŰ���带 �ٿ���� �Ѵ�.
	const char *myName = person1.GetName();
	cout << "�̸� : " << myName << endl;
	
	
	

	// 2
	const Student person2(1002, 31, "lee", "computer engineering");
	person2.ShowData();

	
	return 0;
}