#include <iostream>
using namespace std;
class AppleSeller
{
private:
	const int APPLE_PRICE; // �ܰ�
	int numOfApples;			 // �Ǹ��� ��� ����
	int myMoney;					 // ���ͱ�
public:
	AppleSeller(int _price, int numOfApples, int myMoney)
		: APPLE_PRICE(_price)
	{
		this->numOfApples = numOfApples;
		this->myMoney = myMoney;
	}
	void SalesResult(){
		cout << "�Ǹ��� ��� ���� : " << numOfApples << endl;
		cout << "���ͱ� : " << myMoney << endl;
	}

	int SaleApples(int money){
		int appleCnt = money / APPLE_PRICE;
		if (numOfApples < appleCnt){
			cout << "���� ������� : " << numOfApples << endl;
			cout << "������ �ִ�ݾ��� : " << numOfApples* APPLE_PRICE << endl;
			return 0;
		}
		numOfApples -= appleCnt; // �ǸŰ��� - 
		myMoney += money;				 // ���ͱ� ����
		return appleCnt;
	}
};

class AppleBuyer
{
private:
	int numOfApples;			 // ������ ��� ����
	int myMoney;					 // ���� �ݾ�
public:
	AppleBuyer(int myMoney, int numOfApples)
	{
		this->myMoney = myMoney;
		this->numOfApples = numOfApples;
	}
	void BuyerResult(){
		cout << "������ ��� ���� : " << numOfApples << endl;
		cout << "���� �ݾ� : " << myMoney << endl;
	}

	void BuyApples(AppleSeller & seller, int money){
		if (money <= 0){
			cout << "���űݾ��� 0 �̻��̾�� �մϴ�." << endl;
			return;
		}
		else if (money > myMoney){
			cout << "�����ϰ��� �ϴ� �ݾ��� ���� ���� �ݾ׺��� Ů�ϴ�." << endl;
			return;
		}

		int result = seller.SaleApples(money);
		if (result == 0) return;
		// ��� ���ż��� seller���� ó���Ѵ�.
		numOfApples += result;
		/*
			��ü���� ����� �޼��� ���޿� ���� �����ϰ� �Ǵµ�,
			�̷��� �޼����� �� ��ü�� �ִ� �޼ҵ带 ȣ���ϴ� ���̴�.
		*/
		  
		// �� ���
		myMoney -= money; 
	}

};


int main(void){
	AppleSeller seller(1000, 20, 0);
	AppleBuyer buyer(5000, 0);

	seller.SalesResult();
	buyer.BuyerResult();

	buyer.BuyApples(seller, 2000);

	cout << "====================" << endl;

	seller.SalesResult();
	buyer.BuyerResult();

	buyer.BuyApples(seller, -3000);
	buyer.BuyApples(seller, 35000);

	seller.SalesResult();

	return 0;
}