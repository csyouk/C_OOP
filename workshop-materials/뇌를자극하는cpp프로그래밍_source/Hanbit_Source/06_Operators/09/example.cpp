#include <bitset>
#include <iostream>
using namespace std;

int main() 
{
	// �ǿ����ڸ� �غ��Ѵ�.
	unsigned char a, b;
	a = 178;
	b = 113;

	// ��Ʈ���� �� ������ ����
	unsigned char c1, c2, c3, c4;
	c1 = a & b;		// AND
	c2 = a | b;		// OR
	c3 = a ^ b;		// XOR
	c4 = ~a;		// NOT

	// ����� ����Ѵ�.
	// ��ȣ�ȿ��� 10������ ��µȴ�.
	cout << "a = " << bitset<8>(a) << "(" << (unsigned int)a << ")\n";
	cout << "b = " << bitset<8>(b) << "(" << (unsigned int)b << ")\n";
	cout << "a & b = " << bitset<8>(c1) << "(" << (unsigned int)c1 << ")\n";
	cout << "a | b = " << bitset<8>(c2) << "(" << (unsigned int)c2 << ")\n";
	cout << "a ^ b = " << bitset<8>(c3) << "(" << (unsigned int)c3 << ")\n";
	cout << "~a    = " << bitset<8>(c4) << "(" << (unsigned int)c4 << ")\n";

	return 0;
}