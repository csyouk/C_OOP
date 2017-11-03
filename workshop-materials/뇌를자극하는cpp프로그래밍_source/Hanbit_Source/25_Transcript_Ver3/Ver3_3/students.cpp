#include "students.h"
#include "student.h"
#include <iostream>
using namespace std;

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
// general : true-�Ϲ��л�, false-��޿����� �л�
// ��ȯ�� : �� �̻� �Է��� �� ���� ��� false ��ȯ
bool Students::AddStudent(bool general)
{
	// �л��� ������ ���� ��ü�� �����Ѵ�.
	Student* std;
	if (general)
		std = new Student(NumberOfStudent + 1);
	else
		std = new EngStudent(NumberOfStudent + 1);

	// ���� ������ �Է¹޴´�.
	std->Input();

	// �������� ����ؼ� ���ο� ��ü ����� ����Ѵ�.
	const int current = NumberOfStudent + 1;// ������� �Է¹��� �л� ��
	const int prev = NumberOfStudent;		// ���� ������ �Է¹��� �л� ��

	TotalAve = (TotalAve * prev / current) + (std->GetAverage() / current);

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
	cout << "\n              < ��ü ���� ���� >";
	cout << "\n   �й�  �̸�  ���� ���� ���� ��޿���   ���\n";

	// ����Ʈ�� �ִ� ��� �л��� ������ ����Ѵ�.
	Node* current = students.GetHead()->GetNext();
	while( current != students.GetHead())
	{
		// ���� ����� ����Ÿ�� �����´�.
		const Student* std = (Student*)current->GetData();

		// ���� ���� ������ ����Ѵ�.
		std->Show();

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