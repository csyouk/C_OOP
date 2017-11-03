#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

// 한 명의 학생에대한 정보를
// 관리할 클래스
class Student
{
public:
	Student(int sNo);
	virtual ~Student();
	virtual void Input();
	virtual void Show() const;

	// 접근자들
	int		GetStdNumber() const;
	string	GetName() const;
	int		GetKor() const;
	int		GetEng() const;
	int		GetMath() const;
	float	GetAverage() const;

protected:
	int sNo;			// 학번
	string name;		// 이름
	int kor, eng, math;	// 국영수 점수
	float ave;			// 평균
};

// 고급 영어를 듣는 학생에 대한
// 정보를 관리할 클래스
class EngStudent : public Student
{
public:
	EngStudent(int sNo);
	virtual void Input();
	virtual void Show() const;

protected:
	int hi_eng;
};

#endif