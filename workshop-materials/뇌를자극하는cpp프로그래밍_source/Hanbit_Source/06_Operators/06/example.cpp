int main()
{
	// Ű�� �÷��� ������ ������ �����Ѵ�.
	int height;
	float eyesight;

	// height, eyesight ���� �Է¹޴´�.
	// ( �������� ���� �Է� �޴� ���� ����� �ʾ����Ƿ�
	// �ҽ� �ڵ� �󿡼� �׳� �����Ѵ�)
	height = 175;
	eyesight = 0.8f;

	// ������ �����ϴ��� �˻��Ѵ�.
	bool ok;		// �ڰ��� ���� ����ΰ�?
	ok = height >= 160 && height <= 180 || eyesight >= 1.0f && eyesight <= 2.0f;

	return 0;
}
