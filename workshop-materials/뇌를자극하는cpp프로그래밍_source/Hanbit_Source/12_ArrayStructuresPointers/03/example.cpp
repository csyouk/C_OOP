#include <iostream>
using namespace std;

int main()
{
	// �� ���� �����͸� �ʱ�ȭ�Ѵ�.
	short sArrays[10];
	short* ps1 = &sArrays[3];
	short* ps2 = &sArrays[7];

	// ����� ����Ѵ�.
	cout << "ps1 = " << ps1 << "\n";
	cout << "ps2 = " << ps2 << "\n";
	cout << "ps2 - ps1 = " << ps2 - ps1 << "\n";

	return 0;
}
