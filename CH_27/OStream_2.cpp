#include <iostream>

namespace myStd{
	char * endl = "\n";
	class ostream
	{
	public:
		ostream & operator<<(char * str)  { printf("%s", str);  return *this; }
		ostream & operator<<(int num)     { printf("%d", num); return *this; }
		ostream & operator<<(double dnum) { printf("%lf", dnum); return *this; }
	};
	ostream cout; // ostream cout °´Ã¼ »ý¼º
}
using namespace myStd;
int main(void){

	myStd::cout << "hello world" << myStd::endl;
	cout << 100 << endl;
	cout << 3.5 << endl;

	return 0;
}