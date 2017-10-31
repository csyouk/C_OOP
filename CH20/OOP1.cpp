#include <iostream>
using namespace std;

struct Account{
	char accId[20];
	char passWD[20];
	char name[20];
	int balance;
};

void Deposit(Account &acc, int money)
{
	acc.balance += money;
}

void Withdraw(Account & acc, int money)
{
	if (acc.balance < money){
		cout << "�ܰ� ����" << endl;
		return;
	}
	acc.balance -= money;
}

int main(void){

	Account kim = { "1001", "1234", "kim", 1000 };

	cout << "���¹�ȣ " << kim.accId   << endl;
	cout << "��й�ȣ " << kim.passWD  << endl;
	cout << "��    �� " << kim.name    << endl;
	cout << "��    �� " << kim.balance << endl;

	Deposit(kim, 2000);
	cout << "��    �� " << kim.balance << endl;

	Withdraw(kim, 3000);
	cout << "��    �� " << kim.balance << endl;

	Withdraw(kim, 1000);
	cout << "��    �� " << kim.balance << endl;

	return 0;
}