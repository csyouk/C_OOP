#include <iostream>
using namespace std;

// 2������ �ڸ� �� �ϳ��� ���ϴ� ��� �Լ�
void Convert2Bin(int dec)
{
	// 10������ 0���� �۰ų� ������ �����Ѵ�.
	if (dec <= 0)
		return;

	// ���ڸ� 2�� ���� ���� ���ڷ� �ٽ� ȣ���Ѵ�.
	Convert2Bin( dec / 2);

	// ���ڸ� 2�� ���� �������� ����Ѵ�.
	cout << dec % 2;
}

int main()
{
	// 13�� �������� ��ȯ�Ѵ�.
	Convert2Bin( 13);

	cout << "\n";
	return 0;
}
