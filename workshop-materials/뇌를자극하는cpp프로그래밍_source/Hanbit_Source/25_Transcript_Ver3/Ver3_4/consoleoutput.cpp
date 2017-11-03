#include "consoleoutput.h"
#include <iostream>
#include <iomanip>
using namespace std;

// ������
ConsoleOutput::ConsoleOutput()
{
	columns = 0;
}

// ǥ�� ����ϱ� �����Ѵ�.
// title : ǥ�� ����
void ConsoleOutput::BeginTable(STR title)
{
	// ������ ����Ѵ�.
	cout << "\n\t\t\t" << title << "\n";
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
		cout << setw(9) << headers[i];

	cout << "\n";
}

// ǥ�� ���ڵ带 ����Ѵ�.
// record : ���ڵ�. �� ����� ����Ÿ�� �ǹ��Ѵ�.
void ConsoleOutput::PutRecord(string record[])
{
	// ���ڵ带 ����Ѵ�.
	for (int i = 0; i < columns; ++i)
		cout << setw(9) << record[i];

	cout << "\n";
}

// ǥ �׸��⸦ ��ģ��.
void ConsoleOutput::EndTable()
{
	// �ϴ� �� ����. �׳� �� ĭ ��� �ش�.
	cout << "\n";
}

// ȭ�鿡 ���ڿ��� ����Ѵ�.
// text : ���ڿ�
void ConsoleOutput::Write(STR text)
{
	cout << text << "\n";
}
