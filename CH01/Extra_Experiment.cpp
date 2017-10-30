#if 0
#include <iostream>
int main()
{
	using std::cout;
	int data = 20;
	int &rData = data;
	cout << rData; // expected 20
	return 0;
}
#endif

#if 1
#include <iostream>
int main()
{
	using std::cout;
	int data = 20;
	int &rData = data;
	cout << "Address in memory of data: " << &data << std::endl; // expected address of data
	cout << "Address in memory of rData: " << &rData << std::endl; // expected address of data
	return 0;
}
#endif
