class NeedConstructor
{
public:
	const int maxCount;
	int& ref;
	int sample;
};

int main()
{
	// ��ü�� �����Ѵ�.
	NeedConstructor  cr;

	// �������ڸ��� �ٷ� �ʱ�ȭ �غ���.
	cr.maxCount = 100;
	cr.ref = cr.sample;

	return 0;
}
