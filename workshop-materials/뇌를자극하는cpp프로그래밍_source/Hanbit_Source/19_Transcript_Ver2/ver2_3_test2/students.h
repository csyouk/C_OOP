#ifndef STUDENTS_H
#define STUDENTS_H

#include <string>
#include <iostream>
using namespace std;

// 한 명의 학생에대한 정보를
// 보관할 구조체
struct Student
{
	int sNo;			// 학번
	string name;		// 이름
	int kor, eng, math;	// 국영수 점수
	float ave;			// 평균

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