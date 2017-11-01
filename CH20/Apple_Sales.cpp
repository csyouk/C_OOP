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
		// 사과 구매수량 seller에서 처리한다.
		numOfApples += seller.SaleApples(money); 
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
	AppleBuyer buyer(5000, 0);

	seller.SalesResult();
	buyer.BuyerResult();

	buyer.BuyApples(seller, 2000);

	cout << "====================" << endl;

	seller.SalesResult();
	buyer.BuyerResult();

	return 0;
}