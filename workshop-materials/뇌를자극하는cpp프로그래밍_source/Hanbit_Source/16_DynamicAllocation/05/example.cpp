#include <iostream>
using namespace std;

// ���ڿ��� ����� �������ִ� �Լ�
char* ReverseString(const char* src, int len)
{
	// ���ο� ���ڿ��� ������ �޸𸮸� �Ҵ��Ѵ�.
	char* reverse = new char [len + 1];

	// ���ڿ��� �������� �����Ѵ�.
	for (int i = 0; i < len; ++i)
		reverse[i] = src[len - i - 1];

	// �� ���ڿ��� ���� NULL ���ڸ� �־��ش�.
	reverse[len] = NULL;

	// �� ���ڿ��� ��ȯ�Ѵ�.
	return reverse;
}

int main()
{
	// ���ڿ��� �ϳ� �����.
	char original[] = "NEMODORI";

	// �Լ��� ȣ���Ѵ�.
	char* copy = ReverseString( original, 8);

	// �� ���ڿ��� ����Ѵ�.
	cout << original << "\n";
	cout << copy << "\n";

	// �� ���ڿ��� �޸𸮸� �����Ѵ�.
	delete[] copy;
	copy = NULL;

	return 0;
}
