int main()
{
	// �迭�� ����
	int nArray[10];
	int* p = &nArray[0];

	// �迭�� Ž���ϸ鼭 ���� �ִ´�.
	for (int i = 0; i < 10; ++i)
		*(p + i) = i;
	
	return 0;
}
