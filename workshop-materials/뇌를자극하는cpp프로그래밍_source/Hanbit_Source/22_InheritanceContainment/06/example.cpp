#include "docwriter.h"
#include "htmlwriter.h"

int main()
{
	// HTMLWriter ��ü ����
	HTMLWriter hw( "test.html", "HTMLWriter content");

	// DocWriter ��ü ����
	DocWriter dw;

	// dw ��ü�� hw ��ü�� ����
	dw = hw;


	// ���� ����
	dw.Write();

	return 0;
}
