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

	// 다형성의 이점을 사용하려면
	// 소멸자에도 virtual을 반드시 붙이는 것이 좋다.
	virtual ~AAA()
	{
		cout << "~AAA() call!" << endl;
		delete[] str1;
	}
	virtual void ShowString(){
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

	virtual void ShowString(){
		AAA::ShowString();
		cout << "str2 : " << str2 << endl;
	}
};


int main(void){

	BBB * b1 = new BBB("hello", "world");
	b1->ShowString();

	delete b1;

	AAA * a1 = new BBB("multi ", "campus");
	a1->ShowString();

	delete a1;

	return 0;
}