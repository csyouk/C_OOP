#include <iostream>
using namespace std;

namespace myStd{
	class istream
	{
	public:
		istream& operator>>(char & ch)  { ch = getchar(); return *this; }
		istream& operator>>(int &n)      { scanf("%d%*c", &n); return *this; }
		istream& operator>>(double &d)  { scanf("%lf%*c", &d); return *this; }
		istream& operator>>(char * str) { gets(str); return *this; }
	};
	
	istream CIN;
}
using namespace myStd;

int main(void){

	char msg[30], ch;
	int num;
	double dnum;

	cout << "한 문자 입력 ? ";
	CIN >> ch;
	cout << "정수 입력 ? ";
	CIN >> num;
	cout << "실수 입력 ? ";
	CIN >> dnum;
	cout << "문자열 입력 ? ";
	CIN >> msg;

	cout << ch << ", " << num << ", " << dnum << ", " << msg << endl;
	

	return 0;
}