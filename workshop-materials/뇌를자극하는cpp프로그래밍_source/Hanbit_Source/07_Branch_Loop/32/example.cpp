#include <iostream>
using namespace std;

int main()
{
	// 2~9�ܱ��� �ݺ��Ѵ�.
	for (int i = 2; i <= 9; ++i)
	{
		// i���� ������ ǥ���Ѵ�.
		cout << i << " �� --------\n";

		// 1~9���� �ݺ��Ѵ�.
		for (int j = 1; j <= 9; ++j)
		{
			cout << i << " x " << j << " = " << i * j << "\n";
		}
	}

	return 0;
}