#include <iostream>
using namespace std;

int main()
{
	// ����ؼ� �޴��� �����ش�.
	while(1)
	{
		// �޴� �����ֱ�
		cout << "\n------ �޴� ------\n";
		cout << "1. �л� ���� �߰�\n";
		cout << "2. ��ü ���� ����\n";
		cout << "Q. ���α׷� ����\n";
		cout << "------------------\n\n";
		cout << "���ϴ� �۾��� ��ȣ�� �Է��ϼ��� : ";

		// �۾� �Է¹ޱ�
		char select;
		cin >> select;


		// ���õ� ���� ���� ó��
		switch(select)
		{
		case '1':
			// �л� ���� �߰�
			cout << "\n�л� ���� �߰��� ���õǾ����ϴ�.\n";
			break;
		case '2':
			// ��ü ���� ����
			cout << "\n��ü ���� ���Ⱑ ���õǾ����ϴ�.\n";
			break;
		case 'Q':
		case 'q':
			// ����
			cout << "\n���α׷��� �����մϴ�.\n";
			return 0;
		default:
			// �� ���� ����
			cout << "\n�ùٸ� ���� �Է����ּ���.\n";
			break;
		}

	}

	return 0;
}