#include "student.h"
#include "baseoutput.h"
#include <iostream>
#include <iomanip>
#include <sstream>
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
// out : 출력객체
void Student::Show(BaseOutput& out) const
{
	// 값을 모두 하나의 문자열로 만든다.
	stringstream ss;
	ss.precision(2);
	ss << fixed;
	ss << sNo << " " << name << " " << kor << " ";
	ss << eng << " " << math << " - " << ave;

	// 7개의 문자열을 가진 배열을 만들고 초기화한다.
	string record[7];
	for(int i = 0; i < 7; ++i)
		ss >> record[i];

	// 출력 객체에 보낸다.
	out.PutRecord( record);
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

// 개인 정보를 화면에 출력한다.
// out : 출력객체
void EngStudent::Show(BaseOutput& out) const
{
	// 값을 모두 하나의 문자열로 만든다.
	stringstream ss;
	ss.precision(2);
	ss << fixed;
	ss << sNo << " " << name << " " << kor << " ";
	ss << eng << " " << math << " " << hi_eng << " " << ave;

	// 7개의 문자열을 가진 배열을 만들고 초기화한다.
	string record[7];
	for(int i = 0; i < 7; ++i)
		ss >> record[i];

	// 출력 객체에 보낸다.
	out.PutRecord( record);
}

