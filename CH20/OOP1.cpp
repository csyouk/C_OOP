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
		cout << "ÀÜ°í ºÎÁ·" << endl;
		return;
	}
	acc.balance -= money;
}

int main(void){

	Account kim = { "1001", "1234", "kim", 1000 };

	cout << "°èÁÂ¹øÈ£ " << kim.accId   << endl;
	cout << "ºñ¹Ð¹øÈ£ " << kim.passWD  << endl;
	cout << "ÀÌ    ¸§ " << kim.name    << endl;
	cout << "ÀÜ    ¾× " << kim.balance << endl;

	Deposit(kim, 2000);
	cout << "ÀÜ    ¾× " << kim.balance << endl;

	Withdraw(kim, 3000);
	cout << "ÀÜ    ¾× " << kim.balance << endl;

	Withdraw(kim, 1000);
	cout << "ÀÜ    ¾× " << kim.balance << endl;

	return 0;
}