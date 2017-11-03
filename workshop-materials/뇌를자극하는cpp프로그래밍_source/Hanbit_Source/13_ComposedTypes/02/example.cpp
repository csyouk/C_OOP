enum { JOB_DWARF, JOB_WARRIOR, JOB_SORCERER };

struct Character
{
	int jobType;

	// 다른 멤버들이 더 있다.
};

int main()
{
	Character c;

	// c 가 누군가에 의해 초기화 된다.

	// c가 마법사인 경우
	if (JOB_SORCERER == c.jobType)
	{
		// 필요한 일을 한다.
	}

	return 0;
}
