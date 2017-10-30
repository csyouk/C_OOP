#include <iostream>
using namespace std;

float CalSalary(int salary){
	return (float)100 + (float)salary * (float)(0.12);
}

int main(void){

	int sales;

	while (1)
	{
		// 메세지 출력, 입력
		cout << "판매 금액을 입력해주세요 : (-1 to end) ";
		cin >> sales;
		if (sales == -1) break;
		cout << "이번 달 급여 : " << CalSalary(sales) << endl;
	}

	return 0;
}