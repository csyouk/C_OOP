// ���� ����
int global = 10;

void MyFunction();

int main()
{
	// ���� ����
	int local = 20;

	// ���� ������ ����
	global = 100;	// ����

	// �ڽ��� ���� ������ ����
	local = 200;	// ����

	// �Լ� ȣ��
	MyFunction();

	return 0;
}

void MyFunction()
{
	// ���� ������ ����
	global = 100;	// ����

	// �ٸ� �Լ��� ���� ������ ����
	local = 200;	// ����
}
