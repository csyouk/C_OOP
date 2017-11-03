#include <memory>
using namespace std;

int main()
{
	// 스마트 포인터 생성
	auto_ptr<int> p( new int );

	// 스마트 포인터의 사용
	*p = 100;

	// 메모리를 따로 해제해 줄 필요가 없다

	return 0;
}