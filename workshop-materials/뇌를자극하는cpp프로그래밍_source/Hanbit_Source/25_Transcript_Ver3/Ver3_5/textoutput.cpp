#include "textoutput.h"

// ������
TextOutput::TextOutput(STR filename)
{
	// ������ �����Ѵ�.
	fout.open(filename.c_str());
}

// �Ҹ���
TextOutput::~TextOutput()
{
	// ������ �ݴ´�.
	fout.close();
}

// ostream ��ü�� ��ȯ�Ѵ�.
// ��ȯ�� : ostream ��ü�� fout�� ��ȯ�Ѵ�.
ostream& TextOutput::StdOut()
{
	return fout;
}

