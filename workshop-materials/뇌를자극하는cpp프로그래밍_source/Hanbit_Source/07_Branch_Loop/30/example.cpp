#include <iostream>
using namespace std;

int main()
{
	// ��ü ���� ������ ����
	int sum = 0;

	// 1~10���� �ݺ��ϸ鼭 ���Ѵ�.
	for (int i = 1; i <= 10; ++i)
	{
		// i�� 5�� ���� �׳� �Ѿ��.
		if (5 == i)
			continue;

		// ��������� �տ� i�� ���Ѵ�.
		sum += i;	
	}

	// ��� ���
	cout << "���� i�� �� = " << i << "\n";
	cout << "1~4, 6~10 ������ �� = " << sum << "\n";

	return 0;
}