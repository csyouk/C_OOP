#include <iostream>
using namespace std;

int main()
{
	// �迭 ����
	long lArray[20];

	// �����Ͱ� �� �迭�� ����Ű�� ������
	long (*p)[20] = &lArray;

	// �����͸� ���ؼ� �迭�� �������.
	(*p)[3] = 300;

	// ����� Ȯ������
	cout << "lArray[3] = " << lArray[3] << "\n";

	return 0;
}
