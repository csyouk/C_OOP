#include <new>
#include <iostream>
using namespace std;

int main()
{
	try
	{
		// ���� ���� �޸𸮸� �Ҵ��Ѵ�.
		char* p = new char [0xfffffff0];

	}
	catch(bad_alloc& ex)
	{
		cout << ex.what() << "\n";
	}
	
	return 0;
}