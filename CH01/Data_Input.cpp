#include <iostream>
using namespace std;

int main(void){

	char name[20], comAddr[50];
	int salary;

	cout << "이름 : "; 
	cin.getline(name, 20);  // 문자열은 \n를 남기지 않는다.

	cout << "월급 : ";
	cin >> salary;
	if (cin.fail()){
		cout << "Please input number" << endl;
		salary = 0;
		cin.clear();
		cin.ignore(100, '\n'); 
	}
	else cin.ignore(1);      // 1바이트를 버린다.(엔터키 문자열을 버림) - 숫자는 \n을 남긴다.

	cout << "회사주소 : ";
	cin.getline(comAddr, 50);
	if (cin.good() == false){
		cin.clear();
	}


	cout << name << "," << salary << ", " << comAddr << endl;

	return 0;
}