#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// ���� ���ڿ��� �ϳ� ����� �д�.
	char src[] = "Hanbit-Media";

	// ��! ���� ���� ���ڿ��� �����غ���.

	// 1. ���� ���ڿ��� ���̸� ���.
	int len = strlen(src);
	

	// 2. �� ���ڿ��� ��� �޸𸮸� �Ҵ��Ѵ�.
	char* dest = new char [len + 1];

	// 3. ���ڿ��� �����Ѵ�.
	strcpy(dest, src);

	// ����� ����Ѵ�.
	cout << "src = " << src << "\n";
	cout << "dest = " << dest << "\n";

	// �޸𸮸� �����Ѵ�.
	delete[] dest;
	dest = NULL;

	return 0;
}
