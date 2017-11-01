#include <iostream>
using namespace std;

class Person{
private:
	int age;
public:
	Person() : age(0) {}
	void GetThis(){
		cout << "GetThis() this : " << this << endl;
	}
	Person * GetThis2(){
		return this;
	}
	Person & GetThis3(){
		this->age = 23;
		return *this;
	}
	Person & smile1(){
		cout << "[������]";
		return *this;
	}
	Person * smile2(){
		cout << "[������]";
		return this;
	}
	void ShowData(){
		cout << age << endl;
	}
};

int main(void){

	cout << "p1�� ����. : " << endl;
	Person * p1 = new Person();
	cout << "p1 : " << p1 << endl;
	
	p1->smile1().smile2()->smile1().smile1().smile2();

	cout << endl;
	p1->GetThis();

	// p1�� p2�� �޸𸮴� �ٸ���. 
	// ������ ������ ���� ������ �ִ�.
	// �׷��ٰ� ������ ���� ����Ű�� �ִٴ� ���� �ƴϴ�.
	Person p2 = p1->GetThis3();
	p2.ShowData();
	p1->ShowData();

	delete p1;
	//delete p2; // error, stack�� ������ �����̱� ����.
	return 0;
}
