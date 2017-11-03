#include <iostream>
using namespace std;


// �ִ������� �ּҰ������ ���Ѵ�.
void GCD_LCM(int a, int b, int& gcd, int& lcm)
{
	// ��Ŭ������ ȣ������ ����ؼ� GCD�� ���Ѵ�.
	int z;
	int x = a;
	int y = b;
	while(true)
	{
		z = x % y;
		if (0 == z)
			break;

		x = y;
		y = z; 
	}

	// ����� �����Ѵ�.
	gcd = y;
	lcm = a * b / gcd;
}

int main()
{
	// 28�� 35�� �ִ������� �ּҰ������ ���Ѵ�.
	int gcd = 0;
	int lcm = 0;
	GCD_LCM( 28, 35, gcd, lcm);

	// ����� ����Ѵ�.
	cout << "GCD = " << gcd << "\n";
	cout << "LCM = " << lcm << "\n";

	return 0;
}
