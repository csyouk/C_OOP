#include <iostream>
using namespace std;

// 3�� ��ȯ�ϴ� �Լ�
int Three()
{
	return 3;
}

int main()
{
	// ��ȯ���� ���� ����
	int ret;

	// �Լ��� ȣ���ϰ� ��ȯ���� �����Ѵ�.
	ret = Three();

	// ��� ���
	cout << "ret = " << ret << "\n";

	return 0;
}