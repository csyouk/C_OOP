#include <iostream>
//using namespace std;

namespace myStd{
	char * endl = "\n";
	class ostream
	{
	public:
		void operator<<(char * str)  { printf("%s ", str); }
		void operator<<(int num)     { printf("%d ", num); }
		void operator<<(double dnum) { printf("%lf", dnum); }
	};
	ostream cout; // ostream cout °´Ã¼ »ý¼º
}
using namespace myStd;
int main(void){

	myStd::cout << "hello world";
	myStd::endl;
	cout << 100;
	cout << endl;
	cout << 3.5;
	cout << endl;

	return 0;
}