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

// ������
// (List�� �����ڵ� ȣ���Ѵ�)
Students::Students()
: students( &Students::DeleteData )
{
	// �ʱ�ȭ
	TotalAve = 0.0f;
	NumberOfStudent = 0;
}

// �Ҹ���
Students::~Students()
{
	// ���� ���� ���� ����.
}

// �л��� �� �� �߰��Ѵ�.
// ��ȯ�� : �� �̻� �Է��� �� ���� ��� false ��ȯ
bool Students::AddStudent()
{
	// ���� �ο� ������ �˻��ϴ� �ڵ尡 ��������.

	// ��ũ�� ����Ʈ�� �����ϴ� �ڵ尡 ��������.

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
	students.InsertNodeAfter( students.GetTail(), std);

	return true;
}

// ��ü ������ �����ش�.
void Students::ShowAll()
{
	// �Ǽ� ��½ÿ� �Ҽ��� ���� �� �ڸ��� ǥ�õǵ��� �Ѵ�.
	cout.precision(2);
	cout << fixed;

	// Ÿ��Ʋ �κ��� ����Ѵ�.
	cout << "\n           < ��ü ���� ���� >";
	cout << "\n   �й�  �̸�  ���� ���� ����   ���\n";

	// ����Ʈ�� �ִ� ��� �л��� ������ ����Ѵ�.
	Node* current = students.GetHead()->GetNext();
	while( current != students.GetHead())
	{
		// ���� ����� ����Ÿ�� �����´�.
		const Student* std = (Student*)current->GetData();

		// �ش� �л��� ������ ����Ѵ�.
		cout << setw(7) << std->sNo << setw(7) << std->name;
		cout << setw(5) << std->kor << setw(5) << std->eng;
		cout << setw(5) << std->math << setw(7) << std->ave << "\n";

		// ���� ��带 ����Ų��.
		current = current->GetNext();
	}

	// ��ü ����� ����Ѵ�.
	cout << "\n��ü ��� = " << TotalAve << "\n";
}


// ��ũ�� ����Ʈ�� ������ ���ſ� �Լ�
// (��ũ�� ����Ʈ�� ����� ����Ÿ��
// ������ �� �� �Լ��� ȣ���Ѵ�.)
void Students::DeleteData(void* data)
{
	// Student ����ü�� �ٲ㼭 �����Ѵ�.
	delete (Student*)data;
}
