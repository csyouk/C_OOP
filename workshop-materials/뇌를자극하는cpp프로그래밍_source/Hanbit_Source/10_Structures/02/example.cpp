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
	StudentInfo	si1;
	StudentInfo	si2;

	// si1�� ����� ���� �ִ´�.
	si1.bloodType = 'O';
	si1.stdNumber = 20031128;
	si1.grade = 3.5f;

	// si2�� ����� ���� �ִ´�.
	si2.bloodType = 'A';
	si2.stdNumber = 19961219;
	si2.grade = 2.3f;

	// ����� ���� ����Ѵ�.
	cout << "�й� : " << si1.stdNumber << "\n";
	cout << "���� : " << si1.grade << "\n";
	cout << "������ : " << si1.bloodType << "\n\n";
	cout << "�й� : " << si2.stdNumber << "\n";
	cout << "���� : " << si2.grade << "\n";
	cout << "������ : " << si2.bloodType << "\n\n";

	return 0;
}
