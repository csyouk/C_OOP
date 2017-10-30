#include <iostream>
using namespace std;

void Swap(int & i1, int& i2){
	int tmp;
	tmp = i2;
	i2 = i1;
	i1 = tmp;
}

void Swap(char & c1, char& c2){
	char tmp;
	tmp = c2;
	c2 = c1;
	c1 = tmp;
}

void Swap(double & d1, double& d2){
	double tmp;
	tmp = d2;
	d2 = d1;
	d1 = tmp;
}

int main(void){
	int    i1 = 100, i2 = 200;
	char   c1 = 'a', c2 = 'b';
	double d1 = 3.5, d2 = 10.0;

	Swap(i1, i2);
	Swap(c1, c2);
	Swap(d1, d2);

	cout << i1 << "," << i2 << endl;
	cout << c1 << "," << c2 << endl;
	cout << d1 << "," << d2 << endl;

	return 0;
}