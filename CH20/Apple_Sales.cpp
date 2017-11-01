#include <iostream>
using namespace std;
class AppleSeller
{
private:
	const int APPLE_PRICE; // 단가
	int numOfApples;			 // 판매할 사과 수량
	int myMoney;					 // 수익금
public:
	AppleSeller(int _price, int numOfApples, int myMoney)
		: APPLE_PRICE(_price)
	{
		this->numOfApples = numOfApples;
		this->myMoney = myMoney;
	}
	void SalesResult(){
		cout << "판매할 사과 수량 : " << numOfApples << endl;
		cout << "수익금 : " << myMoney << endl;
	}
};

class AppleBuyer
{
private:
	int numOfApples;			 // 구매한 사과 수량
	int myMoney;					 // 남은 금액
public:
	AppleBuyer(int myMoney, int numOfApples)
	{
		this->myMoney = myMoney;
		this->numOfApples = numOfApples;
	}
	void BuyerResult(){
		cout << "구매한 사과 수량 : " << numOfApples << endl;
		cout << "남은 금액 : " << myMoney << endl;
	}
};


int main(void){
	AppleSeller seller(1000, 20, 0);
	AppleBuyer buyer(5000, 0);

	seller.SalesResult();
	buyer.BuyerResult();
	return 0;
}