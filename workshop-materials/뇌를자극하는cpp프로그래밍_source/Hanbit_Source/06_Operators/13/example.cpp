#include <bitset>
#include <iostream>
using namespace std;

int main()
{
	// unsigned�� signed ������ ���� ���� �ִ´�.
	unsigned short us = 0xff00;
	short s = (short)0xff00;

	// ������ ����Ʈ�� �����Ѵ�.
	unsigned short us_shift = us >> 4;
	short s_shift_r = s >> 4;

	// ��� ���
	cout << "     us = " << bitset<16>(us) << "(" << us << ")\n";
	cout << "      s = " << bitset<16>(s) << "(" << s << ")\n";
	cout << "us >> 4 = " << bitset<16>(us_shift) << "(" << us_shift << ")\n";
	cout << " s >> 4 = " << bitset<16>(s_shift_r) << "(" << s_shift_r << ")\n";
	return 0;
}