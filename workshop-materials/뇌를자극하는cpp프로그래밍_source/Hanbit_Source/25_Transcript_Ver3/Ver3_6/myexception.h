#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H

#include <exception>
using namespace std;

// �� ������Ʈ ����� ����
class MyException : public exception
{
public:
	// ������
	// msg : ���ܸ� �����ϴ� ���ڿ�
	MyException(const string& msg)
		:_Str(msg)
	{
	}

	// �Ҹ���
	virtual ~MyException()
	{
	}

	// ���� ���� ���ڿ��� ��ȯ�Ѵ�.
	// ��ȯ�� : ���ڿ�
	virtual const char *what() const
	{
		return _Str.c_str();
	}
protected:
	string _Str;
};

#endif
