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
public:
	// �޼ҵ� �������̵�.
	// ������ �̸��� �Լ��� ������ ��.
	void fct()
	{
		cout << "BBB => void fct() called." << endl;
	}
};

int main(void){

	AAA a1;
	a1.fct();

	BBB b1;
	b1.fct();
	
	// �޼ҵ尡 �������̵�(������)�Ǹ� �Ļ�Ŭ������ �޼ҵ尡 ȣ��ȴ�.
	// �̶� ��� Ŭ���� �޼ҵ�� ��������.
	

	// ���� �θ��� �Լ��� ȣ���ϰ� �ʹٸ�, scope resolution operator�� ����Ѵ�.
	b1.AAA::fct();
	// error
	// __super Ű����� Ŭ���� ���ο����� ����� �����ϴ�.
	//b1.__super::fct();

	BBB * b2 = new BBB();
	b2->fct();
	b2->AAA::fct();

	AAA * a3 = b2;
	// AAA �� ������ ������ ������ 
	// AAA => void fct() called. ���
	a3->fct(); 

	delete b2;
	b2 = NULL;
	a3 = NULL;
	return 0;
}