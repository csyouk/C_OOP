#include <iostream>
using namespace std;

int main()
{
	// ���ڸ� �غ��Ѵ�.
	char c = 'A';

	// ���ڿ��� �غ��Ѵ�.
	char s[] = "This is a string.";

	// ���ڿ��� cout ��ü�� �Ѱ��ش�.
	cout << s << "\n";
	cout << &s[0] << "\n";

	// ������ �ּҸ� cout ��ü�� �Ѱ��ش�.
	cout << &c << "\n";

	return 0;
}
