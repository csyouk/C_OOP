#include <iostream>
using namespace std;

int main()
{
	// �迭�� �����ϸ鼭 �ʱ�ȭ ��Ų��.
	int kor_scores[5] = {100, 88, 92, 40, 76};
	
	// �� ������ ���� ����Ѵ�.
	for (int i = 0; i < 5; ++i)
	{
		cout << i << " ��° ���� = " << kor_scores[i] << "\n";
	}

	return 0;
}