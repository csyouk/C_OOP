#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

// �� ���� �л������� ������
// ������ Ŭ����
class Student
{
public:
	Student(int sNo);
	void Input();
	void Show() const;

	// �����ڵ�
	int		GetStdNumber() const;
	string	GetName() const;
	int		GetKor() const;
	int		GetEng() const;
	int		GetMath() const;
	float	GetAverage() const;

protected:
	int sNo;			// �й�
	string name;		// �̸�
	int kor, eng, math;	// ������ ����
	float ave;			// ���
};

#endif