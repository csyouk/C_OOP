#include <iostream>
using namespace std;

class Account{

public:
	// ¸â¹öº¯¼ö
	char accId[20];  
	char passWD[20];
	char name[20];
	int balance;

	// ¸â¹öÇÔ¼ö
	void Deposit(int money)
	{
		balance += money;
	}

	void Withdraw(int money)
	{
		if (balance < money){
			cout << "ÀÜ°í ºÎÁ·" << endl;
			return;
		}
		balance -= money;
	}
};


int main(void){

	// °´Ã¼ÀÇ ÀÎ½ºÅÏ½º
	Account kim = { "1001", "1234", "kim", 1000 };

	cout << "°èÁÂ¹øÈ£ " << kim.accId << endl;
	cout << "ºñ¹Ð¹øÈ£ " << kim.passWD << endl;
	cout << "ÀÌ    ¸§ " << kim.name << endl;
	cout << "ÀÜ    ¾× " << kim.balance << endl;

	kim.Deposit(2000);
	cout << "ÀÜ    ¾× " << kim.balance << endl;

	kim.Withdraw(3000);
	cout << "ÀÜ    ¾× " << kim.balance << endl;

	kim.Withdraw(1000);
	cout << "ÀÜ    ¾× " << kim.balance << endl;


	Account lee = { "1002", "2222", "lee", 4000 };
	cout << "ÀÜ    ¾× " << lee.balance << endl;

	return 0;
}