#include <new>
#include <iostream>
using namespace std;

int main()
{
	try
	{
		// 많은 양의 메모리를 할당한다.
		char* p = new char [0xfffffff0];

	}
	catch(bad_alloc& ex)
	{
		cout << ex.what() << "\n";
	}
	
	return 0;
}