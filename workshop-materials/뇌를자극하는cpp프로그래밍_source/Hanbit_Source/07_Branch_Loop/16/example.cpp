#include <iostream>
using namespace std;

int main()
{
	// ���� ����
	// (������ ���� �����Ѵ�)
	int score = 1;

	// ������ ���� ������ �޽����� ���
	switch(score)
	{
		case 0:
		case 1:
		case 2:
			cout << "������ �ϼ���~\n";
			break;
		case 3:
			cout << "���־��~\n";
			break;
		default:
			cout << "�ùٸ��� ���� �����Դϴ�!!\n";
	}

	return 0;
}
