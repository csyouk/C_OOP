#include <iostream>
using namespace std;
class Counter
{
public:
	int val;
	void Increment(){val++;} // 郴何 立辟

private:

};

int main(void){

	Counter cnt;

	// 寇何立辟
	cnt.val = 0;
	cnt.Increment();

	cout << cnt.val << endl;
	return 0;
}