#include <cstdio>

int main()
{
	// �ȳ� �޽����� ����Ѵ�.
	printf("�� ���� ���ڸ� �Է��ϼ���~\n");

	// �� ���� ������ �Է¹޴´�.
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	// ����� ���ؼ� ����Ѵ�.
	float ave = float(a + b + c) / 3.0f;

	printf("�Է��Ͻ� �� %d, %d, %d�� ����� %f �Դϴ�.\n",a, b, c, ave);

	return 0;
}
