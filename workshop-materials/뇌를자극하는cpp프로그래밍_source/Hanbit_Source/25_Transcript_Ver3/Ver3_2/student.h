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
	void Input();
	void Show() const;

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

#endif