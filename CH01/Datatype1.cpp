#include <iostream>
using namespace std;

int main(){

	char ch = 'A';
	int inum = 100;
	float fnum = 1.2;
	double dnum = 3.4;
	long int lnum = 210000000;
	_int64 long_num;

	cout << sizeof(ch) << "," << sizeof(inum) << ","
		<< sizeof(fnum) << "," << sizeof(dnum) << "," <<  sizeof(lnum) << endl;

	cout << (ch) << "," << (inum) << ","
		<< (fnum) << "," << (dnum) << "," << (lnum) << endl;

	cout << fixed;

	cout << (ch) << "," << (inum) << ","
		<< (fnum) << "," << (dnum) << "," << (lnum) << endl;

	cout << "_int64 : " << sizeof(long_num) << endl;
	long_num = 4300000000;
	cout << "long num " << long_num << endl;

	char i2c;
	float i2f;
	double i2d;

	// implicit type conversion
	i2c = inum;
	i2f = inum;
	i2d = inum;

	bool truefalse;

	cout << "sizeof boolean : "<< sizeof(bool) << endl;

	return 0;
}