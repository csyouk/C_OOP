#include <iostream>
using namespace std;

int main()
{
	// ���� ������ �����Ѵ�.
	int class_number = 5;		// ��
	int student_number = 45;	// ��ȣ

	// �������� ������ �����Ѵ�.
	int korean_score = 90;		// ���� ����
	int english_score = 100;	// ���� ����
	int math_score = 80;		// ���� ����

	// ������ ����� �����Ѵ�.
	int total_score = 270;		// ����
	int average = 90;			// ���

	// ����ǥ�� ����Ѵ�.
	cout << "��  ��ȣ  ���� ���� ����  ���� ���\n";
	cout << class_number << "    " << student_number << "    "
		<< korean_score << "  " << english_score << "   " 
		<< math_score << "    " << total_score << "  "	<< average << "\n";

	return 0;
}