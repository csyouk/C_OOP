#include <iostream>
using namespace std;

class NeedConstructor
{
public:
	const int maxCount;
	int& ref;
	int sample;

	NeedConstructor();
	NeedConstructor(int count, int& number);

};

NeedConstructor::NeedConstructor(int count, int& number)
: maxCount(count), ref(number)
{
	sample = 200;
}

NeedConstructor::NeedConstructor()
: maxCount(100), ref(sample)
{
	sample = 200;
}

int main()
{
	// ������ ������ �غ��Ѵ�.
	int number = 400;

	// ��ü�� �����Ѵ�.
	NeedConstructor  cr(300, number);

	// ������ ����Ѵ�.
	cout << "cr.maxCount = " << cr.maxCount << "\n";
	cout << "cr.ref = " << cr.ref << "\n";

	return 0;
}
