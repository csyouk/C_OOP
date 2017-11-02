#include <iostream>
using namespace std;

class AAA{
public:
	// �����Լ�
	// ����� �Ļ�Ŭ���� �ּҷ� ����.
	virtual void fct(){cout << "AAA => void fct() called." << endl;}
};

class BBB : public AAA{
public:
	void fct(){cout << "BBB => void fct() called." << endl;}
};

class CCC : public BBB
{
public:
	virtual void fct(){ cout << "CCC => void fct() called." << endl; }
};

int main(void){

	BBB * b1 = new BBB();
	b1->fct();  // Static-Binding

	AAA * a1 = b1;
	a1->fct(); // Dynamic-Binding

	// virtual Ű���尡 �����ÿ��� AAA => void fct() called. ���
	// virtual Ű���尡 �����ÿ��� BBB => void fct() called. ���
	// ��, virtual Ű���尡 �ִ� �޼ҵ�� ������ �Ļ�Ŭ������ ����ȴ�.

	cout << "===========================" << endl;

	BBB * b2 = new CCC();
	b2->fct();  // CCC method ȣ��. virtual�̴ϱ�.

	cout << "===========================" << endl;

	AAA * a2 = b2;
	a2->fct(); // CCC ȣ��.
	// b2�� BBB Ÿ��������, b2���� CCC�� �Ļ�Ŭ�����̹Ƿ�
	// CCC�� fct�� ȣ��ȴ�.

	// Ư�� Ŭ������ �޼ҵ带 ȣ���ϰ� �ʹٸ�, scope resolution operator�� �������.
	b2->AAA::fct(); 
	b2->BBB::fct();

	return 0;
}