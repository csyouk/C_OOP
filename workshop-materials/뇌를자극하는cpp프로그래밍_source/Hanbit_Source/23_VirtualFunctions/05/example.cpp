#include "docwriter.h"
#include "htmlwriter.h"

int main()
{
	// �ڽ� ��ü ����
	HTMLWriter hw( "test.html", "This is HTMLWriter content.");

	// �θ� Ŭ������ �����ͷ� ����Ų��.
	DocWriter* pdw = &hw;

	// �����͸� ����ؼ� �����Լ� ȣ��
	pdw->Write();

	return 0;
}
