
#include <iostream>
using namespace std;

class AAA{
private :
	int num;
public:
	AAA(int _num)
	{
		num = _num;
	}

	void ShowData(void) const
	{
		cout << "ShowData() const => run : " << num << endl;
	}

};

int main(void){

	AAA a1 = AAA(100);
	a1.ShowData();

	// 객체가 상수화 되어 있다.
	// 해당 객체는 a2내부에서는 변경 불하다.
	//const AA a2 = AAA(200);
	//a2.ShowData();

	return 0;
}