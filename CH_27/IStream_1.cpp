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

	cout << "�� ���� �Է� ? ";
	CIN >> ch;
	cout << "���� �Է� ? ";
	CIN >> num;
	cout << "�Ǽ� �Է� ? ";
	CIN >> dnum;
	cout << "���ڿ� �Է� ? ";
	CIN >> msg;

	cout << ch << ", " << num << ", " << dnum << ", " << msg << endl;
	

	return 0;
}