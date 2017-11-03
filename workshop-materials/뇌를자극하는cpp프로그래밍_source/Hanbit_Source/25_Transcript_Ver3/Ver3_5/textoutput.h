#ifndef TEXT_OUTPUT_H
#define TEXT_OUTPUT_H

#include "consoleoutput.h"
#include <fstream>
using namespace std;

// �ؽ�Ʈ ���� ����� �����ִ� �Լ�
class TextOutput : public ConsoleOutput
{
public:
	TextOutput(STR filename);
	virtual ~TextOutput();

	// BaseOutput�� ��� �Լ�����
	// ���� �������̵� �� �ʿ�� ����.

protected:
	virtual ostream& StdOut();

protected:
	ofstream	fout;	// ������ �����ϴ� ��ü
};

#endif
