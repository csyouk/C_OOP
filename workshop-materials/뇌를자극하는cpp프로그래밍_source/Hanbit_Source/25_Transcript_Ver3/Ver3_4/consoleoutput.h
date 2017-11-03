#ifndef CONSOLE_OUTPUT_H
#define CONSOLE_OUTPUT_H

#include <string>
using namespace std;

// �ҽ� �ڵ带 �����ϰ� �ϱ����ؼ� 
// Ÿ���� ���� �����Ѵ�.
typedef const string& STR;

// �ܼ� ����� �����ִ� Ŭ����
class ConsoleOutput
{
public:
	ConsoleOutput();

	void BeginTable(STR title);
	void PutHeader(string headers[], int number);
	void PutRecord(string record[]);
	void EndTable();
	void Write(STR text);

protected:
	int columns;	// ����� ����
};

#endif
