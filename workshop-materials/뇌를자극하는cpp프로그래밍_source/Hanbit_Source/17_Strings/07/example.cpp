#include <iostream>
#include <string>
using namespace std;

int main()
{
	// �� ���ڿ��� �غ��Ѵ�.
	string str1 = "abcde";
	string str2 = "fghij";

	// �� ���ڿ��� �����Ѵ�.
	str1 = str1 + str2;
 
	// ���յ� ���ڿ��� ������ ���Ѵ�.
	if ( str1 == "abcdefghij")
		cout << "str1 and \"abcdefghij\" are identical.\n";

	// �Ϻη� ������ ���ڿ��� ���غ���
	if ("123456" != str1)
		cout << "\"123456\" and str1 are NOT identical.\n";

	return 0;
}
