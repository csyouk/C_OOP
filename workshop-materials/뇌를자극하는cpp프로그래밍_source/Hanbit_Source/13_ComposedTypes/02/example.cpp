enum { JOB_DWARF, JOB_WARRIOR, JOB_SORCERER };

struct Character
{
	int jobType;

	// �ٸ� ������� �� �ִ�.
};

int main()
{
	Character c;

	// c �� �������� ���� �ʱ�ȭ �ȴ�.

	// c�� �������� ���
	if (JOB_SORCERER == c.jobType)
	{
		// �ʿ��� ���� �Ѵ�.
	}

	return 0;
}
