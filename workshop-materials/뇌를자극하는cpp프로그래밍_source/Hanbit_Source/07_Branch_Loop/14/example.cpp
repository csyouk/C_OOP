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
		case 1:
			cout << "���� �� ����ϼ���~\n";
		case 2:
			cout << "��Ÿ���׿�~\n";
		case 3:
			cout << "���־��~\n";
	}

	return 0;
}