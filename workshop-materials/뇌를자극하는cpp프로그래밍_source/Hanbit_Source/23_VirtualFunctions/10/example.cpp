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

	Dog(int n);
};

Dog::Dog(int n)
{
	// �ϴ� �� ����.
}
void Dog::Eat()
{
	cout << name << " says, 'Growl~'\n";
}

int main()
{
	Dog dog1;

	return 0;
}
