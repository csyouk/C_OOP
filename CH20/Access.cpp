#include <iostream>
using namespace std;
class Counter
{
public:
	int val;
	void Increment(){val++;} // 내부 접근

private:

};

int main(void){

	Counter cnt;

	// 외부접근
	cnt.val = 0;
	cnt.Increment();

	cout << cnt.val << endl;
	return 0;
}