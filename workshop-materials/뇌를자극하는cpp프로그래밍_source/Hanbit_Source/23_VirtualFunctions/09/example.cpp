#include <iostream>
#include <string>
using namespace std;

// �ֿϵ��� Ŭ����
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

// ������ Ŭ����
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
	// ������ ����
	Dog dog1;
	dog1.name = "Patrasche";

	// �� ���� Eat() �Լ��� ȣ���Ѵ�.
	dog1.Eat();
	dog1.Eat( "milk" );

	return 0;
}
