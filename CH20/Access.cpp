#include <iostream>
using namespace std;
class Counter
{
public:
	int val;
	void Increment(){val++;} // ���� ����

private:

};

int main(void){

	Counter cnt;

	// �ܺ�����
	cnt.val = 0;
	cnt.Increment();

	cout << cnt.val << endl;
	return 0;
}