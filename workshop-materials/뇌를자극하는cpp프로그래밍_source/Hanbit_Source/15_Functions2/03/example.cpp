#include <iostream>
using namespace std;

void WhilePositive(int n)
{
	// ���ڸ� ����Ѵ�.
	cout << "n = " << n << "\n";

	// ���ڰ� 0���� �۴ٸ� ��� ȣ���� ������.
	if (n < 0)
		return;

	// �׷��� �ʴٸ� ����ؼ� ���ȣ���� �Ѵ�.
	WhilePositive( n - 1);

	// ���ڸ� �� ����Ѵ�.
	cout << "n = " << n << "\n";
}

int main()
{
	// ��� �Լ��� ȣ��
	WhilePositive(10);

	return 0;
}
