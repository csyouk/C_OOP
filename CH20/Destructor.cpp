#include <iostream>
using namespace std;

class AAA{
public:
	AAA(){
		cout << "AAA() ȣ��." << endl; 
	}
	~AAA(){ // �޸� �ݳ�, ���� �ý��� ��������, ��Ʈ��ũ�� ���� ����.
		cout << "~AAA() ȣ��." << endl;
	}
};

int main(void){
	AAA a1;
	AAA a2;

	return 0;
}