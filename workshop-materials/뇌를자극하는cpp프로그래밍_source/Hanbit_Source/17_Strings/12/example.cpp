#include <iostream>
#include <string>
using namespace std;

int main()
{
	// string ��ü�� �����.
	string cppstyle = "Yes, I am.";

	// C ��Ÿ�� ���ڿ��� ����ų �����͸� �غ��Ѵ�.
	const char* cstyle = NULL;

	// C ��Ÿ�� ���ڿ��� ��´�.
	cstyle = cppstyle.c_str();

	// �� ���ڿ��� ����Ѵ�.
	cout << "cstyle = " << cstyle << "\n";
	cout << "cppstyle = " << cppstyle << "\n";

	return 0;
}
