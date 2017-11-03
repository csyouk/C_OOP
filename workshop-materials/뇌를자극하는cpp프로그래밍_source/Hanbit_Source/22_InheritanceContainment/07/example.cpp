#include "docwriter.h"
#include "htmlwriter.h"

int main()
{
	// HTMLWriter 객체 생성
	HTMLWriter hw("test.html", "HTMLWriter Content");

	// DocWriter 클래스의 포인터로 객체를 가리킨다.
	DocWriter* pDW = &hw;

	// 파일에 저장한다.
	pDW->Write();

	return 0;
}
