#include <iostream>
using namespace std;

// �Լ� ����
int Factorial(int n);

int main()
{
	// ���丮���� ���ϰ� ����� �����Ѵ�.
	int result;
	result = Factorial(5);

	// ����� ����Ѵ�.
	cout << "5! �� " << result << "�Դϴ�.\n";

	return 0;
}

int Factorial(int n)
{
	// ����� ������ ������ �غ��Ѵ�.
	int result = 1;

	// ���丮���� ���Ѵ�.
	for (int i = 1; i <= n; ++i)
		result *= i;
	
	// ����� ��ȯ�Ѵ�.
	return result;
}
