#include <iostream>
using namespace std;

class AAA{
public:
	// ���� ���� �Լ�  ( = 0 ) ǥ��
	// ���� ���� �Լ��� body�� ����.
	virtual void fct() = 0; 
	void ShowMSG(){ cout << "Multicampus." << endl; }
};

class BBB : public AAA{
public:
	// ���� �����Լ��� �θ𿡼� �����ߴٸ�,
	// �ڽ��� �ݵ�� �����Լ��� �����ؾ� �Ѵ�.
	void fct(){ cout << "BBB => void fct() called." << endl; }
};

class CCC : public BBB
{
public:
	virtual void fct(){ cout << "CCC => void fct() called." << endl; }
};

int main(void){

	// �߻� Ŭ���� ��ü�� ������ �Ұ��ϴ�.
	// error
	// AAA * a1 = new AAA();

	// �̷� ���� �����ϴ�.
	AAA * a2 = new BBB();
	a2->fct();      // �ڽĿ��� ���������Լ��� ������ �Լ�
	a2->ShowMSG();  // �θ�κ��� ��ӹ��� �޼ҵ�

	AAA * a3 = new CCC();
	a3->fct();
	a3->ShowMSG();

	return 0;
}