int main()
{
	// ����� �����.
	{
		// ��� �ȿ��� ���� ����
		int var_in_block = 10;

		// ������ ����
		var_in_block = 100;	// ����
	}

	// ������ ����
	var_in_block = 1000;	// ����

	return 0;
}