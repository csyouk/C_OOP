#include <iostream>
using namespace std;

// �̷��� �Լ� ���� �����ϴ� ���� ���� �ʴ�.
//int Func(){return 100;} 
int Func(int x=0){ return x+100;}

int main(void){
	
	cout << Func(500) << endl;

	// �ָŸ�ȣ�� �޼ҵ� ȣ��
	//cout << Func() << endl; 

	return 0;
}