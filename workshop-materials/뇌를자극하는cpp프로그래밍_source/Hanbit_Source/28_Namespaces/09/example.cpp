// a.cpp에서 정의된 g를 사용하기 위한 준비
extern int g;

int main()
{
	g = 200;	// 실패

	return 0;
}