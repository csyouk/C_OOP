#ifndef BASE_OUTPUT_H
#define BASE_OUTPUT_H

#include <string>
using namespace std;

// �ҽ� �ڵ带 �����ϰ� �ϱ����ؼ� 
// Ÿ���� ���� �����Ѵ�.
typedef const string& STR;

// ��� Ŭ�������� �������̽��� �����ϴ�
// �߻� Ŭ����
class BaseOutput
{
public:
	virtual void BeginTable(STR title) = 0;
	virtual void PutHeader(string headers[], int number) = 0;
	virtual void PutRecord(string record[]) = 0;
	virtual void EndTable() = 0;
	virtual void Write(STR text) = 0;

	virtual ~BaseOutput() {};
};

#endif
