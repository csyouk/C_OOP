#include "student.h"
#include <iostream>
#include <iomanip>
using namespace std;

//---------------------------------------------------
// Student
//---------------------------------------------------

// 생성자
// sNo : 학번
Student::Student(int sNo)
{
	// 학번 대입
	this->sNo	= sNo;

	// 나머지 멤버 초기화
	kor = eng = math = 0;
	ave = 0.0f;
}

// 소멸자
Student::~Student()
{
}

// 개인 정보를 입력받는다.
void Student::Input()
{
	// 해당 학생의 이름, 국영수 점수를 입력받는다.
	cout << "이름(공백없이) 국어, 영어, 수학 점수를 입력하세요 : \n";
	cin >> name >> kor >> eng >> math;

	// 개인 평균을 계산한다.
	ave = float(kor + eng + math) / 3.0f;
}

// 개인 정보를 화면에 출력한다.
void Student::Show() const
{
	cout << setw(7) << sNo << setw(7) << name;
	cout << setw(5) << kor << setw(5) << eng;
	cout << setw(5) << math << setw(9) << "-";
	cout << setw(7) << ave << "\n";
}

// 접근자들
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

// 생성자
EngStudent::EngStudent(int sNo)
: Student(sNo)
{
	// EngStduent에만 있는 멤버를 초기화한다.
	hi_eng = 0;
}

// 점수를 입력받는다.
void EngStudent::Input()
{
	// 해당 학생의 이름, 국영수, 고급 영어 점수를 입력받는다.
	cout << "이름(공백없이) 국어, 영어, 수학, 고급영어 점수를 입력하세요 : \n";
	cin >> name >> kor >> eng >> math >> hi_eng;

	// 개인 평균을 계산한다.
	ave = float(kor + eng + math + hi_eng) / 4.0f;
}

void EngStudent::Show() const
{
	cout << setw(7) << sNo << setw(7) << name;
	cout << setw(5) << kor << setw(5) << eng;
	cout << setw(5) << math << setw(9) << hi_eng;
	cout << setw(7) << ave << "\n";
}

