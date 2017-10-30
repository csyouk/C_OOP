#include <iostream>
using namespace std;
int main(void){

	int salary = 3500000;
	int & r_salary = salary; // 참조변수

	std::cout << "Salary : " << salary << std::endl;
	cout << "r_salary : " << r_salary << endl;

	r_salary += 200000;
	cout << "salary : " << salary << endl;
	cout << "r_salary : " << salary << endl;
	cout << &salary << " , " << &r_salary << endl;
}