class NeedConstructor
{
public:
	const int maxCount;
	int& ref;
	int sample;

	NeedConstructor();
};

NeedConstructor::NeedConstructor()
{
	maxCount = 100;
	num = sample;
}

int main()
{
	// ��ü�� �����Ѵ�.
	NeedConstructor  cr;

	return 0;
}
