#include "docwriter.h"
#include "htmlwriter.h"

int main()
{
	// HTMLWriter ��ü ����
	HTMLWriter hw("test.html", "HTMLWriter Content");

	// DocWriter Ŭ������ �����ͷ� ��ü�� ����Ų��.
	DocWriter* pDW = &hw;

	// ���Ͽ� �����Ѵ�.
	pDW->Write();

	return 0;
}
