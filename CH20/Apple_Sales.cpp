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

	int SaleApples(int money){
		int appleCnt = money / APPLE_PRICE;
		if (numOfApples < appleCnt){
			cout << "남은 사과수는 : " << numOfApples << endl;
			cout << "구매할 최대금액은 : " << numOfApples* APPLE_PRICE << endl;
			return 0;
		}
		numOfApples -= appleCnt; // 판매개수 - 
		myMoney += money;				 // 수익금 증가
		return appleCnt;
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

	void BuyApples(AppleSeller & seller, int money){
		if (money <= 0){
			cout << "구매금액은 0 이상이어야 합니다." << endl;
			return;
		}
		else if (money > myMoney){
			cout << "구매하고자 하는 금액이 내가 가진 금액보다 큽니다." << endl;
			return;
		}

		int result = seller.SaleApples(money);
		if (result == 0) return;
		// 사과 구매수량 seller에서 처리한다.
		numOfApples += result;
		/*
			객체간의 통신은 메세지 전달에 의해 전달하게 되는데,
			이러한 메세지는 그 객체에 있는 메소드를 호출하는 것이다.
		*/
		  
		// 돈 출금
		myMoney -= money; 
	}

};


int main(void){
	AppleSeller seller(1000, 20, 0);
	AppleBuyer buyer(50000, 0);

	seller.SalesResult();
	buyer.BuyerResult();

	buyer.BuyApples(seller, 2000);

	cout << "====================" << endl;

	seller.SalesResult();
	buyer.BuyerResult();

	buyer.BuyApples(seller, -3000);
	buyer.BuyApples(seller, 35000);

	seller.SalesResult();
	buyer.BuyerResult();

	cout << "====================" << endl;

	buyer.BuyApples(seller, 40000);
	seller.SalesResult();
	buyer.BuyerResult();

	return 0;
}