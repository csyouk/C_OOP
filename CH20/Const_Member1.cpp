#include <iostream>
using namespace std;

class Student{
private:
	const int id;
	// 상수화됙 메서드가 이 멤버를 수정할 수 있게 해준다.
	mutable int age;
	char name[20];
	char major[30];
public:
	// id(_id)를 멤버 이니셜라이즈 라고 부른다.
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
		ShowIntro(); //불가하다 상수화된 메소드는 상수화된 메소드밖에 부를 수 없다.

		age = 30;
		cout << "| " << id << " | " << age << " | " << name << " | " << major << " | " << endl;
		//age = 30; // 상수화된 메서드에서는 멤버의 수정이 불가하다.
	}

	// 상수화된 주소는 메소드로 반환 불가하다.
	// 궂이 주소를 보내고 시다면, 상수화된 주소를 반환해야 한다.
	const char * GetName() const
	{  
		return name;
	}
};

int main(void){

	Student person1(1001, 30, "kim", "computer science");
	person1.ShowData();

	// 못받는 이유. 좌측의 변수가 상수화되지 않았기 때문이다.
	// 따라서 const키워드를 붙여줘야 한다.
	const char *myName = person1.GetName();
	cout << "이름 : " << myName << endl;
	
	
	

	// 2
	const Student person2(1002, 31, "lee", "computer engineering");
	person2.ShowData();

	
	return 0;
}