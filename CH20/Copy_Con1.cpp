#include <iostream>
using namespace std;

class AAA
{
public:
	AAA()     { cout << "AAA() 호출" << endl;}
	AAA(int x){ cout << "AAA(int x) 호출" << endl; }
	AAA(AAA & ref){ // 복사 생성자
		cout << "AAA(AAA & ref) 호출" << endl;
	}
};

int main(void){

	AAA obj1;
	AAA obj2(100);

	AAA obj3(obj1);

	return 0;
}