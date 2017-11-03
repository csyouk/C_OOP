#include <iostream>
using namespace std;

class NeedConstructor
{
public:
	const int maxCount;
	int& ref;
	int sample;

	NeedConstructor();
};

NeedConstructor::NeedConstructor()
: maxCount(100), ref(sample)
{
	sample = 200;
}

int main()
{
	// 객체를 생성한다.
	NeedConstructor  cr;

	// 내용을 출력한다.
	cout << "cr.maxCount = " << cr.maxCount << "\n";
	cout << "cr.ref = " << cr.ref << "\n";

	return 0;
}
