#include "student.h"
#include <iostream>
#include <iomanip>
using namespace std;

// ������
// sNo : �й�
Student::Student(int sNo)
{
	// �й� ����
	this->sNo	= sNo;

	// ������ ��� �ʱ�ȭ
	kor = eng = math = 0;
	ave = 0.0f;
}

// ���� ������ �Է¹޴´�.
void Student::Input()
{
	// �ش� �л��� �̸�, ������ ������ �Է¹޴´�.
	cout << "�̸�(�������) ����, ����, ���� ������ �Է��ϼ��� : \n";
	cin >> name >> kor >> eng >> math;

	// ���� ����� ����Ѵ�.
	ave = float(kor + eng + math) / 3.0f;
}

// ���� ������ ȭ�鿡 ����Ѵ�.
void Student::Show() const
{
	cout << setw(7) << sNo << setw(7) << name;
	cout << setw(5) << kor << setw(5) << eng;
	cout << setw(5) << math << setw(7) << ave << "\n";
}

// �����ڵ�
int		Student::GetStdNumber() const
{ return sNo; }
string	Student::GetName() const
{ return name; }
int		Student::GetKor() const
{ return kor; }
int		Student::GetEng() const
{ return eng; }
int		Student::GetMath() const
{ return math; }
float	Student::GetAverage() const
{ return ave; }

