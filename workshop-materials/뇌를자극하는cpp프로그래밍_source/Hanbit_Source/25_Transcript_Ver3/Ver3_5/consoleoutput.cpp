#include "consoleoutput.h"
#include <iostream>
#include <iomanip>
using namespace std;


// ������
ConsoleOutput::ConsoleOutput()
{
	columns = 0;
}

// �Ҹ���
ConsoleOutput::~ConsoleOutput()
{
}

// ǥ�� ����ϱ� �����Ѵ�.
// title : ǥ�� ����
void ConsoleOutput::BeginTable(STR title)
{
	// ������ ����Ѵ�.
	StdOut() << "\n\t\t\t" << title << "\n";
}

// ǥ�� ����� ����Ѵ�.
// headers : �����
// numbers : ����� ����
void ConsoleOutput::PutHeader(string headers[], int number)
{
	// ����� ������ �����Ѵ�.
	columns = number;

	// ����� �׷��ش�.
	for (int i = 0; i < number; ++i)
		StdOut() << setw(9) << headers[i];

	StdOut() << "\n";
}

// ǥ�� ���ڵ带 ����Ѵ�.
// record : ���ڵ�. �� ����� ����Ÿ�� �ǹ��Ѵ�.
void ConsoleOutput::PutRecord(string record[])
{
	// ���ڵ带 ����Ѵ�.
	for (int i = 0; i < columns; ++i)
		StdOut() << setw(9) << record[i];

	StdOut() << "\n";
}

// ǥ �׸��⸦ ��ģ��.
void ConsoleOutput::EndTable()
{
	// �ϴ� �� ����. �׳� �� ĭ ��� �ش�.
	StdOut() << "\n";
}

// ȭ�鿡 ���ڿ��� ����Ѵ�.
// text : ���ڿ�
void ConsoleOutput::Write(STR text)
{
	StdOut() << text << "\n";
}

// ostream ��ü�� ��ȯ�Ѵ�.
// ��ȯ�� : ostream ��ü�� cout�� ��ȯ�Ѵ�.
ostream& ConsoleOutput::StdOut()
{
	return cout;
}