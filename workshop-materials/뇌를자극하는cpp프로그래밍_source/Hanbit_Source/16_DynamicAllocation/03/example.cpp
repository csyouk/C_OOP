#include <iostream>
using namespace std;

int main()
{
	// �޸𸮸� �Ҵ��Ѵ�.
	short* p = new short [100];

	// c�� ������ �ּ� ���� Ȯ���Ѵ�.
	cout << "p = " << p << "\n";

	// �޸𸮸� �����Ѵ�.
	delete[] p;

	// c�� ������ �ּ� ���� Ȯ���Ѵ�.
	cout << "p = " << p << "\n";

	// �޸𸮸� �����Ѵ�.
	delete[] p;

	return 0;
}
