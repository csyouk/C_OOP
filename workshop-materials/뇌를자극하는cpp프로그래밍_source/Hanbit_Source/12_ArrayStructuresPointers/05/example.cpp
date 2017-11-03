int main()
{
	// 배열을 정의
	int nArray[10];
	int* p = &nArray[0];

	// 배열을 탐색하면서 값을 넣는다.
	for (int i = 0; i < 10; ++i)
		*(p + i) = i;
	
	return 0;
}
