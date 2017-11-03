#include "student.h"
#include "baseoutput.h"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

//---------------------------------------------------
// Student
//---------------------------------------------------

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

// �Ҹ���
Student::~Student()
{
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
// out : ��°�ü
void Student::Show(BaseOutput& out) const
{
	// ���� ��� �ϳ��� ���ڿ��� �����.
	stringstream ss;
	ss.precision(2);
	ss << fixed;
	ss << sNo << " " << name << " " << kor << " ";
	ss << eng << " " << math << " - " << ave;

	// 7���� ���ڿ��� ���� �迭�� ����� �ʱ�ȭ�Ѵ�.
	string record[7];
	for(int i = 0; i < 7; ++i)
		ss >> record[i];

	// ��� ��ü�� ������.
	out.PutRecord( record);
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

//---------------------------------------------------
// EngStudent
//---------------------------------------------------

// ������
EngStudent::EngStudent(int sNo)
: Student(sNo)
{
	// EngStduent���� �ִ� ����� �ʱ�ȭ�Ѵ�.
	hi_eng = 0;
}

// ������ �Է¹޴´�.
void EngStudent::Input()
{
	// �ش� �л��� �̸�, ������, ��� ���� ������ �Է¹޴´�.
	cout << "�̸�(�������) ����, ����, ����, ��޿��� ������ �Է��ϼ��� : \n";
	cin >> name >> kor >> eng >> math >> hi_eng;

	// ���� ����� ����Ѵ�.
	ave = float(kor + eng + math + hi_eng) / 4.0f;
}

// ���� ������ ȭ�鿡 ����Ѵ�.
// out : ��°�ü
void EngStudent::Show(BaseOutput& out) const
{
	// ���� ��� �ϳ��� ���ڿ��� �����.
	stringstream ss;
	ss.precision(2);
	ss << fixed;
	ss << sNo << " " << name << " " << kor << " ";
	ss << eng << " " << math << " " << hi_eng << " " << ave;

	// 7���� ���ڿ��� ���� �迭�� ����� �ʱ�ȭ�Ѵ�.
	string record[7];
	for(int i = 0; i < 7; ++i)
		ss >> record[i];

	// ��� ��ü�� ������.
	out.PutRecord( record);
}

