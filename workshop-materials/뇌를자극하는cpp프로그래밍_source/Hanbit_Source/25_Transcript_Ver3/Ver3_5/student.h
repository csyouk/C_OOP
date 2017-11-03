#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

// BaseOutput 클래스가
// 있다는 사실을 알려준다.
class BaseOutput;

// 한 명의 학생에대한 정보를
// 관리할 클래스
class Student
{
public:
	Student(int sNo);
	virtual ~Student();
	virtual void Input();
	virtual void Show(BaseOutput& out) const;

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
	virtual void Show(BaseOutput& out) const;

protected:
	int hi_eng;
};

#endif