#ifndef STUDENTS_H
#define STUDENTS_H

// ��ũ�� ����Ʈ�� ����Ѵ�.
#include "list.h"

// ���� ������ �����ϴ� Ŭ����
class Students
{
public:
	Students();
	~Students();

	bool AddStudent();
	void ShowAll();

	// �� �Լ��� �ּҸ� List ��ü��
	// �����ڿ� �Ѱ��ַ��� ���� ��� �Լ��� �Ǿ� �Ѵ�.
	static void DeleteData(void* data);

private:
	List students;			// ��ũ�� ����Ʈ
	float TotalAve;			// ��ü ���
	int NumberOfStudent;	// ������� �Էµ� �л� ��
};

#endif