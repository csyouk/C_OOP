#include <iostream>
using namespace std;

float CalSalary(int salary){
	return (float)100 + (float)salary * (float)(0.12);
}

int main(void){

	int sales;

	while (1)
	{
		// �޼��� ���, �Է�
		cout << "�Ǹ� �ݾ��� �Է����ּ��� : (-1 to end) ";
		cin >> sales;
		if (sales == -1) break;
		cout << "�̹� �� �޿� : " << CalSalary(sales) << endl;
	}

	return 0;
}