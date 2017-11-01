#include <iostream>
using namespace std;

class Base
{
private:
	int bNum;
public:
	Base()
	{
		bNum = 0;
		cout << "Base() called." << bNum << endl;
	}
	Base(int n)
	{
		bNum = n;
		cout << "Base(int n) called." << bNum << endl;
	}
	~Base()
	{
		cout << "~Base() called." << endl;
	}
};

class Derived : public Base
{
private:
	int dNum;
public:
	Derived()
	{
		dNum = 0;
		cout << "Derived() called." << dNum << endl;
	}

	Derived(int n) : Base(n)
	//Derived(int n)
	{
		dNum = n;
		cout << "Derived(int n) called." << dNum << endl;
	}

	~Derived()
	{
		cout << "~Derived() called." << endl;
	}
};

int main(void){

	Derived drv1(1);

	return 0;
}