#include <iostream>
using namespace std;

int main()
{
	// ��ü ���� ������ ����
	int sum = 0;

	// 1~10���� �ݺ��ϸ鼭 ���Ѵ�.
	for (int i = 1; i <= 10; ++i)
		sum += i;	// ��������� �տ� i�� ���Ѵ�.

	// ��� ���
	cout << "���� i�� �� = " << i << "\n";
	cout << "1~10 ������ �� = " << sum << "\n";

	return 0;
}