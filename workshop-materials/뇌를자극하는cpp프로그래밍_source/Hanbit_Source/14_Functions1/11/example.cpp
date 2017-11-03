#include <iostream>
using namespace std;


// �ִ������� �ּҰ������ ���Ѵ�.
void GCD_LCM(int a, int b, int* pgcd, int* plcm)
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
	*pgcd = y;
	*plcm = a * b / *pgcd;
}

int main()
{
	// 28�� 35�� �ִ������� �ּҰ���Ҹ� ���Ѵ�.
	int gcd = 0;
	int lcm = 0;
	GCD_LCM( 28, 35, &gcd, &lcm);

	// ����� ����Ѵ�.
	cout << "GCD = " << gcd << "\n";
	cout << "LCM = " << lcm << "\n";

	return 0;
}
