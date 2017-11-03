#include "textoutput.h"
#include "myexception.h"

// ������
TextOutput::TextOutput(STR filename)
{
	// ������ �����Ѵ�.
	fout.open(filename.c_str());

	// ������ ���µ� ������ ��� ���ܸ� ������.
	if (false == fout.is_open())
		throw MyException( filename + "�� �� �� �����ϴ�.");
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

