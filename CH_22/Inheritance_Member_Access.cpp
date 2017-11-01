#include <iostream>
using namespace std;

class Base
{
private:
	int priNum;
protected:
	int proNum;
public:
	int puNum;
};

class Derived : public Base
{
	void ShowData(){
		cout << priNum << endl;
		cout << proNum << endl;
		cout << puNum << endl;
	}
};

int main(void){

	Derived d1;
	cout << d1.priNum << endl;
	cout << d1.proNum << endl;
	cout << d1.puNum << endl;

	return 0;
}
