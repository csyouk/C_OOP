#include <iostream>
using namespace std;

int main()
{
	int i = 11; 	// 10 ���� 1���� ������ ����
	int sum = 0;	// ��ü ���� ������ ����
	
	//  ��--i�� �� �����ϴ� ���ȸ� �ݺ��Ѵ�
	while( --i)
	{
		// ��������� �տ� i�� ���Ѵ�.
		sum += i;
	}

	// ��� ���
	cout << "���� i�� �� = " << i << "\n";
	cout << "1~10 ������ �� = " << sum << "\n";

	return 0;
}