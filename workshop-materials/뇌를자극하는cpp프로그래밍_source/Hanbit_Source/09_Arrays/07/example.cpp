#include <iostream>
using namespace std;

int main()
{
	// �� ���� ������ �迭�� �����Ѵ�.
	char cArray[3] = { 'A', 'B', 'C' };
	int iArray[4] = { 100, 200, 300, 400};
	double dArray[5] = { 0.1, 0.2, 0.3, 0.4, 0.5};

	// cArray�� ũ�⿡ ���� ����
	cout << "sizeof(cArray) = " << sizeof(cArray) << " (Bytes)\n";
	cout << "sizeof(cArray[0]) = " << sizeof(cArray[0]) << " (Bytes)\n";
	cout << "������ ���� = " << sizeof(cArray) / sizeof(cArray[0]) << "\n\n";

	// iArray�� ũ�⿡ ���� ����
	cout << "sizeof(iArray) = " << sizeof(iArray) << " (Bytes)\n";
	cout << "sizeof(iArray[0]) = " << sizeof(iArray[0]) << " (Bytes)\n";
	cout << "������ ���� = " << sizeof(iArray) / sizeof(iArray[0]) << "\n\n";

	// dArray�� ũ�⿡ ���� ����
	cout << "sizeof(dArray) = " << sizeof(dArray) << " (Bytes)\n";
	cout << "sizeof(dArray[0]) = " << sizeof(dArray[0]) << " (Bytes)\n";
	cout << "������ ���� = " << sizeof(dArray) / sizeof(dArray[0]) << "\n\n";

	return 0;
}