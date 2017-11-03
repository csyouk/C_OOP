#include "students.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// 한 명의 학생에대한 정보를
// 보관할 구조체
struct Student
{
	int sNo;			// 학번
	string name;		// 이름
	int kor, eng, math;	// 국영수 점수
	float ave;			// 평균
};


// 100 명의 정보를 보관할 수 있는 배열을 정의
const int MAX_STUDENTS = 100;
Student students[ MAX_STUDENTS];

float TotalAve = 0.0f;		// 전체 평균
int NumberOfStudent = 0;	// 현재까지 입력된 학생 수

// 학생을 한 명 추가한다.
// 반환값 : 더 이상 입력할 수 없는 경우 false 반환
bool AddStudent()
{
	// 100명 모두 입력됐는지 확인
	if (MAX_STUDENTS == NumberOfStudent)
		return false;

	// 소스 코드를 간결하게 하기 위해서
	// 사용할 변수를 레퍼런스로 가리킨다.
	Student& std = students[NumberOfStudent];

	// 해당 학생의 학생번호를 자동으로 입력한다.
	std.sNo = NumberOfStudent + 1;

	// 해당 학생의 이름, 국영수 점수를 입력받는다.
	cout << "이름(공백없이) 국어, 영어, 수학 점수를 입력하세요 : \n";
	cin >> std.name >> std.kor >> std.eng >> std.math;

	// 개인 평균을 계산한다.
	std.ave = float(std.kor + std.eng + std.math) / 3.0f;

	// 기존값을 사용해서 새로운 전체 평균을 계산한다.
	const int current = NumberOfStudent + 1;// 현재까지 입력받은 학생 수
	const int prev = NumberOfStudent;		// 조금 전까지 입력받은 학생 수

	TotalAve = (TotalAve * prev / current) + (std.ave / current);

	// 입력받은 학생 수를 증가시킨다.
	NumberOfStudent++;

	return true;
}

// 전체 성적을 보여준다.
void ShowAll()
{
	// 실수 출력시에 소수점 이하 두 자리만 표시되도록 한다.
	cout.precision(2);
	cout << fixed;

	// 타이틀 부분을 출력한다.
	cout << "\n           < 전체 성적 보기 >";
	cout << "\n   학번  이름  국어 영어 수학   평균\n";

	// 입력된 학생 수만큼 반복한다.
	for (int i = 0; i < NumberOfStudent; ++i)
	{
		// 소스 코드를 간결하게 하기 위해서
		// 사용할 변수를 레퍼런스로 가리킨다.
		const Student& std = students[i];

		// 해당 학생의 정보를 출력한다.
		cout << setw(7) << std.sNo << setw(7) << std.name;
		cout << setw(5) << std.kor << setw(5) << std.eng;
		cout << setw(5) << std.math << setw(7) << std.ave << "\n";
	}

	// 전체 평균을 출력한다.
	cout << "\n전체 평균 = " << TotalAve << "\n";
}
