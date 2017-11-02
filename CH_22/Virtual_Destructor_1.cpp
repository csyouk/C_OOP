#include <iostream>
#include <cstring>
using namespace std;

class AAA
{
private:
	char * str1;
public:
	AAA(char * s1)
	{
		str1 = new char[strlen(s1) + 1];
		strcpy(str1, s1);
	}

	~AAA()
	{
		cout << "~AAA() call!" << endl;
		delete[] str1;
	}
	 void ShowString(){
		cout << "str1 : " << str1 << ", ";
	}
};

class BBB : public AAA
{
private:
	char * str2;
public:
	BBB(char * _s1, char * _s2) : AAA(_s1)
	{
		str2 = new char[strlen(_s2) + 1];
		strcpy(str2, _s2);
	}

	~BBB()
	{
		cout << "~BBB() call!" << endl;
		delete[] str2;
	}

	 void ShowString(){
		AAA::ShowString();
		cout << "str2 : " << str2 << endl;
	}
};


int main(void){

	BBB * b1 = new BBB("hello", "world");
	b1->ShowString();

	delete b1;




	return 0;
}