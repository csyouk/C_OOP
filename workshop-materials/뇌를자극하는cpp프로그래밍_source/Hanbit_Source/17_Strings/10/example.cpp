#include <iostream>
#include <string>
using namespace std;

int main()
{
	// C ��Ÿ���� ���ڿ��� �����.
	char cstyle[] = "Are you a string, too?";

	// string ��ü�� �����.
	string cppstyle;

	// ��ȯ�Ѵ�.
	cppstyle = cstyle;

	// �� ���ڿ��� ����Ѵ�.
	cout << "cstyle = " << cstyle << "\n";
	cout << "cppstyle = " << cppstyle << "\n";

	return 0;
}
