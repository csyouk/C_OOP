#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H

// �Ϲ����� ����
class MyException
{
public:
	const void* sender;			// ���ܸ� ���� ��ü�� �ּ�
	const char* description;	// ���ܿ� ���� ����
	int info;					// �ΰ� ����

	MyException(const void* sender, const char* description, int info)
	{
		this->sender = sender;
		this->description = description;
		this->info = info;
	}
};

// �ε����� ���õ� ����
class OutOfRangeException : public MyException
{
public:
	OutOfRangeException(const void* sender, int index)
		: MyException( sender, "Out of Range!!!", index)
	{
	}

};

// �޸𸮿� ���õ� ����
class MemoryException : public  MyException
{
public:
	MemoryException(const void* sender, int bytes)
		: MyException( sender, "Out of Memory", bytes)
	{
	}
};

#endif