#include <iostream>
using namespace std;

int main()
{
	// �� ���� ���� ���� �� �ʱ�ȭ
	int d = 1000, e = 2000;

	// ������ �� Ȯ��
	cout << "d = " << d << ", e = " << e << "\n";

	// e�� ���� �о d�� ����
	d = e;

	// ������ �� Ȯ��
	cout << "d = " << d << ", e = " << e << "\n";

	return 0;
}