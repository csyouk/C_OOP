#include <iostream>
using namespace std;

// 'StudentInfo'��� �̸��� ����ü�� �����Ѵ�.
struct StudentInfo
{
	char bloodType;	// ������
	int stdNumber;	// �й�
	float grade;	// ����
};

int main()
{
	// StudentInfo ����ü Ÿ���� ���� 2���� �����Ѵ�.
	StudentInfo	si1 = { 'O', 20031128, 3.5f };
	StudentInfo	si2 = { 'A', 19961219, 2.3f };

	// ����� ���� ����Ѵ�.
	cout << "�й� : " << si1.stdNumber << "\n";
	cout << "���� : " << si1.grade << "\n";
	cout << "������ : " << si1.bloodType << "\n\n";
	cout << "�й� : " << si2.stdNumber << "\n";
	cout << "���� : " << si2.grade << "\n";
	cout << "������ : " << si2.bloodType << "\n\n";

	return 0;
}
