#include <iostream>
#include <string>
using namespace std;

int main()
{
	// ���ڿ��� �غ��Ѵ�.
	char cs[20];	// C ��Ÿ��
	string cpps;	// C++ ��Ÿ��

	// ���ڿ��� �Է¹޴´�.
	cin.getline(cs, 20);
	cin.clear();
	getline(cin, cpps);

	// ���ڿ��� ����Ѵ�.
	cout << "cs = " << cs << "\n";
	cout << "cpps = " << cpps << "\n";

	return 0;
}
