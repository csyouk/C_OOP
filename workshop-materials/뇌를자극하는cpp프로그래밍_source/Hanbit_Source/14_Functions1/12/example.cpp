#include <iostream>
using namespace std;

// �� ���� ����� ���� ����ü�� ����
struct RetValues
{
	int retValue1;
	int retValue2;
};

// ����ü�� ��ȯ�ϴ� �Լ��� ����
RetValues PlusMinus(int a, int b)
{
	// ����ü ������ �����.
	RetValues ret;
	ret.retValue1 = a + b;
	ret.retValue2 = a - b;

	// ����ü ������ ��ȯ�Ѵ�.
	return ret;
}

int main()
{
	// ��ȯ���� ���� ����ü ������ �غ�
	RetValues result;

	// 3, 5�� ������ ������ ���Ѵ�.
	result = PlusMinus(3, 5);

	// ��� ���
	cout << "3 + 5 = " << result.retValue1 << "\n";
	cout << "3 - 5 = " << result.retValue2 << "\n";
	
	return 0;
}
