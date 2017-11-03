#include <bitset>
#include <iostream>
using namespace std;

int main()
{
	// �� ���� ������ �����ϴ� ����
	// (������ ���� �־�д�)
	unsigned short color = 0x1234;

	// �Ķ����� ������ ������ ��Ʈ�� �����.
	// 0x001f�� 2������ 0000 0000 0001 1111�̴�.
	unsigned short blue;
	blue = color & 0x001f;

	// ��� ���
	cout << "color = " << bitset<16>(color) << "(" << color << ")\n";
	cout << "blue = " << bitset<16>(blue) << "(" << blue << ")\n";

	return 0;	
}