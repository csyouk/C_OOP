#include <iostream>
using namespace std;

class Account{

public:
	// �������
	char accId[20];  
	char passWD[20];
	char name[20];
	int balance;

	// ����Լ�
	void Deposit(int money)
	{
		balance += money;
	}

	void Withdraw(int money)
	{
		if (balance < money){
			cout << "�ܰ� ����" << endl;
			return;
		}
		balance -= money;
	}
};


int main(void){

	// ��ü�� �ν��Ͻ�
	Account kim = { "1001", "1234", "kim", 1000 };

	cout << "���¹�ȣ " << kim.accId << endl;
	cout << "��й�ȣ " << kim.passWD << endl;
	cout << "��    �� " << kim.name << endl;
	cout << "��    �� " << kim.balance << endl;

	kim.Deposit(2000);
	cout << "��    �� " << kim.balance << endl;

	kim.Withdraw(3000);
	cout << "��    �� " << kim.balance << endl;

	kim.Withdraw(1000);
	cout << "��    �� " << kim.balance << endl;


	Account lee = { "1002", "2222", "lee", 4000 };
	cout << "��    �� " << lee.balance << endl;

	return 0;
}