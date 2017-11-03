#include "students.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// �� ���� �л������� ������
// ������ ����ü
struct Student
{
	int sNo;			// �й�
	string name;		// �̸�
	int kor, eng, math;	// ������ ����
	float ave;			// ���
};


// 100 ���� ������ ������ �� �ִ� �迭�� ����
const int MAX_STUDENTS = 100;
Student students[ MAX_STUDENTS];

float TotalAve = 0.0f;		// ��ü ���
int NumberOfStudent = 0;	// ������� �Էµ� �л� ��

// �л��� �� �� �߰��Ѵ�.
// ��ȯ�� : �� �̻� �Է��� �� ���� ��� false ��ȯ
bool AddStudent()
{
	// 100�� ��� �Էµƴ��� Ȯ��
	if (MAX_STUDENTS == NumberOfStudent)
		return false;

	// �ҽ� �ڵ带 �����ϰ� �ϱ� ���ؼ�
	// ����� ������ ���۷����� ����Ų��.
	Student& std = students[NumberOfStudent];

	// �ش� �л��� �л���ȣ�� �ڵ����� �Է��Ѵ�.
	std.sNo = NumberOfStudent + 1;

	// �ش� �л��� �̸�, ������ ������ �Է¹޴´�.
	cout << "�̸�(�������) ����, ����, ���� ������ �Է��ϼ��� : \n";
	cin >> std.name >> std.kor >> std.eng >> std.math;

	// ���� ����� ����Ѵ�.
	std.ave = float(std.kor + std.eng + std.math) / 3.0f;

	// �������� ����ؼ� ���ο� ��ü ����� ����Ѵ�.
	const int current = NumberOfStudent + 1;// ������� �Է¹��� �л� ��
	const int prev = NumberOfStudent;		// ���� ������ �Է¹��� �л� ��

	TotalAve = (TotalAve * prev / current) + (std.ave / current);

	// �Է¹��� �л� ���� ������Ų��.
	NumberOfStudent++;

	return true;
}

// ��ü ������ �����ش�.
void ShowAll()
{
	// �Ǽ� ��½ÿ� �Ҽ��� ���� �� �ڸ��� ǥ�õǵ��� �Ѵ�.
	cout.precision(2);
	cout << fixed;

	// Ÿ��Ʋ �κ��� ����Ѵ�.
	cout << "\n           < ��ü ���� ���� >";
	cout << "\n   �й�  �̸�  ���� ���� ����   ���\n";

	// �Էµ� �л� ����ŭ �ݺ��Ѵ�.
	for (int i = 0; i < NumberOfStudent; ++i)
	{
		// �ҽ� �ڵ带 �����ϰ� �ϱ� ���ؼ�
		// ����� ������ ���۷����� ����Ų��.
		const Student& std = students[i];

		// �ش� �л��� ������ ����Ѵ�.
		cout << setw(7) << std.sNo << setw(7) << std.name;
		cout << setw(5) << std.kor << setw(5) << std.eng;
		cout << setw(5) << std.math << setw(7) << std.ave << "\n";
	}

	// ��ü ����� ����Ѵ�.
	cout << "\n��ü ��� = " << TotalAve << "\n";
}
