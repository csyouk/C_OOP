#include <iostream>
using namespace std;

int main(void){

	char name[20], comAddr[50];
	int salary;

	cout << "이름 : "; 
	cin.getline(name, 20);

	cout << "월급 : ";
	cin >> salary;
	if (cin.fail())
		throw "Please input number";


	cin.clear();
	cin.ignore(100, '\n');
	cout << "회사주소 : ";
	cin.getline(comAddr, 50);

	cout << name << "," << salary << ", " << comAddr << endl;

	return 0;
}