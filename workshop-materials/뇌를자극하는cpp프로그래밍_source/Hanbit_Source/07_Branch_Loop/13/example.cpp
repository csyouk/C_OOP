#include <iostream>
using namespace std;

int main()
{
	// ���� ����
	// (������ ���� �����Ѵ�)
	int score = 2;

	// ������ ���� ������ �޽����� ���
	switch(score)
	{
		case 0:
			cout << "�з� ���̱���~\n";
			break;
		case 1:
			cout << "���� �� ����ϼ���~\n";
			break;
		case 2:
			cout << "��Ÿ���׿�~\n";
			break;
		case 3:
			cout << "���־��~\n";
			break;
	}

	return 0;
}