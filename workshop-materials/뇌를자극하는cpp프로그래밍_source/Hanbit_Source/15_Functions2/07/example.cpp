#include <iostream>
using namespace std;

// ForWindows9x()�� ForWindowsNT()�� ����ų �� �ִ�
// ������ Ÿ���� ��������.
typedef void (*SYSTEM_FUNC)();

void ForWindows9x();
void ForWindowsNT();
bool  IsWindows9x();
void ImportantFunc(SYSTEM_FUNC pfnSyst);


int main()
{
	// �Լ��� ������ ������ �����Ѵ�.
	SYSTEM_FUNC pfn;

	// �ý����� ������ ���� �˸��� �Լ���
	// ����Ű���� �����.
	if (IsWindows9x())
		pfn = &ForWindows9x;
	else
		pfn = &ForWindowsNT;

	// ���� �߿��� �Լ��� ȣ���Ѵ�.
	ImportantFunc(pfn);

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
// ȣ���ؾߵ� �Լ��� �����͸� ���ڷ� �޴´�.
void ImportantFunc(SYSTEM_FUNC pfnSyst)
{
	// ������ �´� �Լ��� ȣ���Ѵ�.
	(*pfnSyst)();

	// �߰� ����

	// �ٽ� �� �� ������ �´� �Լ��� ȣ���Ѵ�.
	(*pfnSyst)();
}
