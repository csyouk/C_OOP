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

	Dog(int n);
};

Dog::Dog(int n)
{
	// 하는 일 없음.
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
