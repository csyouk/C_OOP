int main()
{
	// int 하나를 담을 수 있는 크기의 메모리 공간을 할당한다.
	int* p = new int;

	// 메모리에 값을 넣어본다.
	*p = 337;

	// 사용이 끝난 메모리를 해제한다.
	delete p;

	return 0;
}
