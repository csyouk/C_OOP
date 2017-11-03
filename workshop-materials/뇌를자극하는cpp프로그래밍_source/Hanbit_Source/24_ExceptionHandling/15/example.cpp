#include <iostream>
using namespace std;

// ����Ʈ ������ Ŭ����
class SmartPointer
{
public:
	SmartPointer(char* p)
		: ptr(p) 
	{
	}
	~SmartPointer()
	{
		// �Ҹ��ڰ� ȣ��Ǵ� ���� Ȯ���Ѵ�
		cout << "�޸𸮰� �����ȴ�!!\n";

		delete[] ptr;
	}

public:
	char * const ptr;
};


void A();
void B();

int main()
{
	try
	{
		A();
	}
	catch(const char* ex)
	{
		cout << "���� ���� : " << ex << "\n";
	}

	return 0;
}

void A()
{
	// �޸𸮸� �Ҵ��Ѵ�.
	char* p = new char [100];

	// �޸𸮸� ����Ʈ �����Ϳ� �����Ѵ�.
	SmartPointer sp(p);

	// ������� ����Ǿ����� ����Ѵ�.
	cout << "���ܰ� �߻��ϱ� ��\n";

	// ���ܸ� ������ �Լ� ȣ��
	B();

	// �̰��� ������� ������ ����Ѵ�.
	cout << "���ܰ� �߻��� ��\n";

	// �޸𸮸� ���� ������ �� �ʿ䰡 ����
	//	delete[] p;
	//	p = NULL;
}

void B()
{
	throw "Exception!!";
}