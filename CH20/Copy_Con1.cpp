#include <iostream>
using namespace std;

class AAA
{
public:
	AAA()     { cout << "AAA() ȣ��" << endl;}
	AAA(int x){ cout << "AAA(int x) ȣ��" << endl; }
	AAA(AAA & ref){ // ���� ������
		cout << "AAA(AAA & ref) ȣ��" << endl;
	}
};

int main(void){

	AAA obj1;
	AAA obj2(100);

	AAA obj3(obj1);

	return 0;
}