#ifndef STUDENTS_H
#define STUDENTS_H

#include <string>
#include <iostream>
using namespace std;

// �� ���� �л������� ������
// ������ ����ü
struct Student
{
	int sNo;			// �й�
	string name;		// �̸�
	int kor, eng, math;	// ������ ����
	float ave;			// ���

	~Student()
	{
		cout << "Student::~Student()\n";
	}
};

bool AddStudent();
void ShowAll();
void Setup();
void Teardown();

#endif