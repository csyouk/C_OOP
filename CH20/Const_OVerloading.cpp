
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

	// ��ü�� ���ȭ �Ǿ� �ִ�.
	// �ش� ��ü�� a2���ο����� ���� ���ϴ�.
	//const AA a2 = AAA(200);
	//a2.ShowData();

	return 0;
}