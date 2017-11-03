#include <bitset>
#include <iostream>
using namespace std;

int main()
{
	// �� ���� ������ �����ϴ� ����
	// (������ ���� �־�д�)
	unsigned short color = 0x1234;

	// ������ �κ��� ��Ʈ���� 0���� �����.
	// 0x07ff�� 2������ 0000 0111 1111 1111 �̴�.
	unsigned short color_temp;
	color_temp = color & 0x07ff;

	// ���ο� �������� ���� �غ��Ѵ�.
	unsigned short red = 30;

	// �������� ���� ���� ������ �ű��.
	unsigned short red_temp;
	red_temp = red << 11;

	// �������� ���� ���� �ִ´�.
	unsigned short color_finished;
	color_finished = color_temp | red_temp;

	// ��� ���
	cout << "         color = " << bitset<16>(color) << "(" << color << ")\n";
	cout << "    color_temp = " << bitset<16>(color_temp) << "(" << color_temp << ")\n";
	cout << "           red = " << bitset<16>(red) << "(" << red << ")\n";
	cout << "      red_temp = " << bitset<16>(red_temp) << "(" << red_temp << ")\n";
	cout << "color_finished = " << bitset<16>(color_finished) << "(" << color_finished << ")\n";

	return 0;	
}