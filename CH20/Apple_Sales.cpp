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
};


int main(void){
	AppleSeller seller(1000, 20, 0);
	AppleBuyer buyer(5000, 0);

	seller.SalesResult();
	buyer.BuyerResult();
	return 0;
}