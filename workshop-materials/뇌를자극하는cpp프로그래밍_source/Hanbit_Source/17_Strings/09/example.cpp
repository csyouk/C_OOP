#include <iostream>
#include <string>
using namespace std;

int main()
{
	// ��ü ��θ� ���� ���ڿ��� �����.
	string path = "c:\\My Document\\Pictures\\33.jpg";

	// ���ڿ��� ���̸� ���д�.
	int len = path.size();

	// �� ������ 3 ���ڸ� ���´�.
	string ext = path.substr( len - 3, 3);

	// ����� ����غ���.
	cout << "extention = " << ext << "\n";

	return 0;
}
