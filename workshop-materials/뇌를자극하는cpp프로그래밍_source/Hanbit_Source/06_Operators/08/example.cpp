#include <bitset>
#include <iostream>
using namespace std;

int main()
{
	// �پ��� Ÿ���� ������ �غ��Ѵ�.
	char c = 1;
	short int si = 2;
	int i = 4;

	// ���� 2������ 10������ ����Ѵ�.
	cout << "c = " << bitset<8>(c) << "(" << (int)c << ")\n";
	cout << "si = " << bitset<16>(si) << "(" << si << ")\n";
	cout << "i = " << bitset<32>(i) << "(" << i << ")\n";

	return 0;
}
