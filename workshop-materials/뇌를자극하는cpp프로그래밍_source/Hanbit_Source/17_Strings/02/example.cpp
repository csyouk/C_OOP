#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// �� ���ڿ��� �غ��Ѵ�.
	char str1[20] = "abcde";
	char str2[] = "fghij";

	// �� ���ڿ��� �����Ѵ�.
	strcat(str1, str2);

	// ���յ� ���ڿ��� ������ ���Ѵ�.
	if ( strcmp( str1, "abcdefghij") == 0)
		cout << "str1 and \"abcdefghij\" are identical.\n";

	// �Ϻη� ������ ���ڿ��� ���غ���
	if ( strcmp( "123456", str1) != 0)
		cout << "\"123456\" and str1 are NOT identical.\n";

	return 0;
}
