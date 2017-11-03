#include "students.h"
#include "list.h"
#include <iostream>
#include <iomanip>
using namespace std;

// �迭 ��ſ� ��ũ�� ����Ʈ�� ����ؼ� ����ü�� �����Ѵ�.
List* students = NULL;

float TotalAve = 0.0f;		// ��ü ���
int NumberOfStudent = 0;	// ������� �Էµ� �л� ��

// �л��� �� �� �߰��Ѵ�.
// ��ȯ�� : �� �̻� �Է��� �� ���� ��� false ��ȯ
bool AddStudent()
{
	// ���� �ο� ������ �˻��ϴ� �ڵ尡 ��������.

	// ��ũ�� ����Ʈ�� �ֱ� ���ؼ� 
	// Stduent ������ �ϳ� �������� �Ҵ��Ѵ�.
	Student* std = new Student;

	// �ش� �л��� �л���ȣ�� �ڵ����� �Է��Ѵ�.
	std->sNo = NumberOfStudent + 1;

	// �ش� �л��� �̸�, ������ ������ �Է¹޴´�.
	cout << "�̸�(�������) ����, ����, ���� ������ �Է��ϼ��� : \n";
	cin >> std->name >> std->kor >> std->eng >> std->math;

	// ���� ����� ����Ѵ�.
	std->ave = float(std->kor + std->eng + std->math) / 3.0f;

	// �������� ����ؼ� ���ο� ��ü ����� ����Ѵ�.
	const int current = NumberOfStudent + 1;// ������� �Է¹��� �л� ��
	const int prev = NumberOfStudent;		// ���� ������ �Է¹��� �л� ��

	TotalAve = (TotalAve * prev / current) + (std->ave / current);

	// �Է¹��� �л� ���� ������Ų��.
	NumberOfStudent++;

	// students ����Ʈ�� �� ��带 �߰��Ѵ�.
	InsertNodeAfter( GetTail(students), std);

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

	// ����Ʈ�� �ִ� ��� �л��� ������ ����Ѵ�.
	Node* current = students->head->next;
	while( current != students->head)
	{
		// ���� ����� ����Ÿ�� �����´�.
		const Student* std = (Student*)GetData(current);

		// �ش� �л��� ������ ����Ѵ�.
		cout << setw(7) << std->sNo << setw(7) << std->name;
		cout << setw(5) << std->kor << setw(5) << std->eng;
		cout << setw(5) << std->math << setw(7) << std->ave << "\n";

		// ���� ��带 ����Ų��.
		current = GetNext(current);
	}

	// ��ü ����� ����Ѵ�.
	cout << "\n��ü ��� = " << TotalAve << "\n";
}

// �ʱ�ȭ �Ѵ�.
void Setup()
{
	// ����Ʈ�� �����Ѵ�.
	students = CreateList();
}

// ����� ���ҽ��� �����Ѵ�.
void Teardown()
{
	// ����Ʈ�� �����Ѵ�.
	RemoveList(students, true);
}
