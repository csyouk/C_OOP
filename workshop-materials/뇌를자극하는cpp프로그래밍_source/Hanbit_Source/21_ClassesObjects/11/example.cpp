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
	// ��ü�� �����Ѵ�.
	NeedConstructor  cr;

	// ������ ����Ѵ�.
	cout << "cr.maxCount = " << cr.maxCount << "\n";
	cout << "cr.ref = " << cr.ref << "\n";

	return 0;
}
