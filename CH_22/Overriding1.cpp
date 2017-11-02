#include <iostream>
using namespace std;

class AAA
{
public:
	void fct()
	{
		cout << "AAA => void fct() called." << endl;
	}
};

class BBB : public AAA
{
	void fct()
	{
		cout << "BBB => void fct() called." << endl;
	}
};

int main(void){



	return 0;
}