#include "docwriter.h"
#include "htmlwriter.h"

int main()
{
	// HTMLWriter 按眉 积己
	HTMLWriter hw( "test.html", "HTMLWriter content");

	// DocWriter 按眉 积己
	DocWriter dw;

	// dw 按眉甫 hw 按眉俊 措涝
	dw = hw;


	// 颇老 历厘
	dw.Write();

	return 0;
}
