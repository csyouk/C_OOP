#include <iostream>
using namespace std;

int main()
{
	// ���� ����
	// (������ ���� �����Ѵ�)
	int score = 5;

	// ������ ���� ������ �޽����� ���
	if (0 == score)
		cout << "�з� ���̱���~\n";
	else if (1 == score)
		cout << "���� �� ����ϼ���~\n";
	else if (2 == score)
		cout << "��Ÿ���׿�~\n";
	else if (3 == score)
		cout << "���־��~\n";
	else
		cout << "�ùٸ��� ���� �����Դϴ�!!\n";

	return 0;
}