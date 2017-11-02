#include <iostream>
using namespace std;

class AAA
{
public:
	void String1(){
		cout << "AAA::String1() called." << endl;
	}
};

class BBB
{
public:
	void String2(){
		cout << "BBB::String2() called." << endl;
	}
};

class CCC : public AAA, public BBB
{
public:
	void ShowString(){
		cout << "CCC::ShowString() called." << endl;
		String1();
		String2();
	}
};


int main(void){

	CCC c1;
	c1.String1();
	c1.String2();
	c1.ShowString();

	return 0;
}