#include "docwriter.h"
#include "htmlwriter.h"

int main()
{
	// 자식 객체 생성
	HTMLWriter hw( "test.html", "This is HTMLWriter content.");

	// 부모 클래스의 포인터로 가리킨다.
	DocWriter* pdw = &hw;

	// 포인터를 사용해서 저장함수 호출
	pdw->Write();

	return 0;
}
