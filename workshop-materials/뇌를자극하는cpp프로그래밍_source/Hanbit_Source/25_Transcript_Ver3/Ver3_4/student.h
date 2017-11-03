#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

// ConsoleOutput Ŭ������
// �ִٴ� ����� �˷��ش�.
class ConsoleOutput;

// �� ���� �л������� ������
// ������ Ŭ����
class Student
{
public:
	Student(int sNo);
	virtual ~Student();
	virtual void Input();
	virtual void Show(ConsoleOutput& out) const;

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

// ��� ��� ��� �л��� ����
// ������ ������ Ŭ����
class EngStudent : public Student
{
public:
	EngStudent(int sNo);
	virtual void Input();
	virtual void Show(ConsoleOutput& out) const;

protected:
	int hi_eng;
};

#endif