#include <iostream>
using namespace std;

void Sub()
{
	// static Ű���带 ����ؼ� ���� ���� ����
	static int n = 0;

	// n�� 1 ������Ų �� ���
	++n;
	cout << "n = " << n << "\n";
}

int main()
{
	// Sub �Լ��� ���� �� ȣ���Ѵ�.
	Sub();
	Sub();
	Sub();
	Sub();
	Sub();
		
	return 0;
}