#include <iostream>
using namespace std;

void ForWindows9x();
void ForWindowsNT();
bool  IsWindows9x();
void ImportantFunc();

int main()
{
	// ���� �߿��� �Լ��� ȣ���Ѵ�.
	ImportantFunc();

	return 0;
}

// Windows 95/98/Me �� �Լ�
void ForWindows9x()
{
	cout << "Windows 9x �� �Լ��� ȣ���\n";
}

// Windows NT/2000/XP �� �Լ�
void ForWindowsNT()
{
	cout << "Windows NT/2000/XP �� �Լ��� ȣ���\n";
}

// ���� ����Ǵ� ȯ���� Windows 9x ���� ��ȯ�ϴ� �Լ�
bool  IsWindows9x()
{
	// ���Ƿ� false�� ��ȯ�ϵ��� �صξ���.
	return false;
}

// �ٷ� ��, ���� �߿��� �Լ�
void ImportantFunc()
{
	// ������ �´� �Լ��� ȣ���Ѵ�.
	if (IsWindows9x())
		ForWindows9x();
	else
		ForWindowsNT();

	// �߰� ����

	// �ٽ� �� �� ������ �´� �Լ��� ȣ���Ѵ�.
	if (IsWindows9x())
		ForWindows9x();
	else
		ForWindowsNT();
}
