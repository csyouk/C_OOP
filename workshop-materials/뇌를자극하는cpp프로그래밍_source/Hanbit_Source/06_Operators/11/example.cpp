#include <bitset>
#include <iostream>
using namespace std;

int main()
{
	// �� ���� ������ �����ϴ� ����
	// (������ ���� �־�д�)
	unsigned short color = 0x1234;

	// ����� ������ ������ ��Ʈ�� �����.
	// 0x07e0�� 2������ 0000 0111 1110 0000�̴�.
	unsigned short green_temp;
	green_temp = color & 0x07e0;

	// ����� ��Ʈ���� ������ ������ �̵���Ų��.
	unsigned short green;
	green = green_temp >> 5;

	// ��� ���
	cout << "     color = " << bitset<16>(color) << "(" << color << ")\n";
	cout << "green_temp = " << bitset<16>(green_temp) << "(" << green_temp << ")\n";
	cout << "     green = " << bitset<16>(green) << "(" << green << ")\n";

	return 0;	
}