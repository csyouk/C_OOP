#include <iostream>
using namespace std;

int main()
{
	// ���ڿ� ����� ����ؼ� �迭�� �ʱ�ȭ �Ѵ�.
	char cArray1[] = "ABCDE";
	char cArray2[] = { 'A', 'B', 'C', 'D', 'E', 0 };

	// �� �迭�� ũ�⸦ ���� ����.
	cout << "sizeof(cArray1) = " << sizeof(cArray1) << " (Bytes)\n";
	cout << "sizeof(cArray2) = " << sizeof(cArray2) << " (Bytes)\n";

	// �� �迭�� 4, 5 ��° ���Ҹ� ����غ���.
	cout << cArray1[4] << (int)cArray1[5] << "\n";
	cout << cArray2[4] << (int)cArray2[5] << "\n";

	return 0;
}