#include <iostream>
using namespace std;

int main()
{
	// int Ÿ���� ���� ����
	int i = 0x12345678;

	// char* Ÿ���� �����ͷ� i�� ����Ų��.
	char* pc = (char*)&i;

	// pc�� ����Ű�� ���� ���Ѵ�.
	cout << hex;
	cout << "*pc = " << (int) *pc << "\n";

	return 0;
}