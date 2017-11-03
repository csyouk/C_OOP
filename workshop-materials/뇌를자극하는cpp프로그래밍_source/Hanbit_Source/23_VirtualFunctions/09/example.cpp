#include <iostream>
#include <string>
using namespace std;

// 애완동물 클래스
class Pet
{
public:
	void Eat();
	void Eat(const string& it);

	string name;
};

void Pet::Eat()
{
	cout << name << " says, 'Where is the food?'\n";
}

void Pet::Eat(const string& it)
{
	cout << name << " says, 'I like " << it << ".'\n";
}

// 강아지 클래스
class Dog : public Pet
{
public:
	void Eat();
};

void Dog::Eat()
{
	cout << name << " says, 'Growl~'\n";
}

int main()
{
	// 강아지 생성
	Dog dog1;
	dog1.name = "Patrasche";

	// 두 가지 Eat() 함수를 호출한다.
	dog1.Eat();
	dog1.Eat( "milk" );

	return 0;
}
