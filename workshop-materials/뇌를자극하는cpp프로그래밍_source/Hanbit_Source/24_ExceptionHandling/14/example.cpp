#include <iostream>
using namespace std;

void A();
void B();

int main()
{
	try
	{
		A();
	}
	catch(const char* ex)
	{
		cout << "���� ���� : " << ex << "\n";
	}

	return 0;
}

void A()
{
		// �޸𸮸� �Ҵ��Ѵ�.
	char* p = new char [100];

	// ������� ����Ǿ����� ����Ѵ�.
	cout << "���ܰ� �߻��ϱ� ��\n";

	// ���ܸ� ������ �Լ� ȣ��
	B();

	// �̰��� ������� ������ ����Ѵ�.
	cout << "���ܰ� �߻��� ��\n";

	// �޸𸮸� �����Ѵ�. (���� �ȵ�)
	delete[] p;
	p = NULL;
}

void B()
{
	throw "Exception!!";
}