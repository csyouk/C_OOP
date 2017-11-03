#include <bitset>
#include <iostream>
using namespace std;

// 16��Ʈ Į�󿡼��� �� ���� ��Ÿ���� ����ü
struct Pixel16
{
	unsigned int blue : 5;
	unsigned int green : 6;
	unsigned int red : 5;
};

// Pixel16�� unsigned short�� ����� ���� ����ü
union Convert16
{
	Pixel16 pixel;
	unsigned short us;
};

int main()
{
	// �� ���� ������ �����ϴ� ����
	// (������ ���� �־�д�)
	unsigned short color = 0x1234;

	// unsigned short Ÿ���� ���� Pixel16 ����ü Ÿ���� ��ó��
	// �ٷ�� ���ؼ� ����ü�� ����Ѵ�.
	Convert16 convert;
	convert.us = color;

	// ��� ���
	cout << "color = " << bitset<16>(color) << "(" << color << ")\n";
	cout << "blue = " << bitset<16>( convert.pixel.blue ) << "(" << convert.pixel.blue << ")\n";

	return 0;	
}
