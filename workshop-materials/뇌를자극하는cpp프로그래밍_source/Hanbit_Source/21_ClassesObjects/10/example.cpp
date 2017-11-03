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
	// 객체를 생성한다.
	NeedConstructor  cr;

	return 0;
}
