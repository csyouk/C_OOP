#include "students.h"
#include "student.h"
#include <iostream>
using namespace std;

// 생성자
// (List의 생성자도 호출한다)
Students::Students()
: students( &Students::DeleteData )
{
	// 초기화
	TotalAve = 0.0f;
	NumberOfStudent = 0;
}

// 소멸자
Students::~Students()
{
	// 따로 해줄 것이 없다.
}

// 학생을 한 명 추가한다.
// general : true-일반학생, false-고급영어듣는 학생
// 반환값 : 더 이상 입력할 수 없는 경우 false 반환
bool Students::AddStudent(bool general)
{
	// 학생의 종류에 맏는 객체를 생성한다.
	Student* std;
	if (general)
		std = new Student(NumberOfStudent + 1);
	else
		std = new EngStudent(NumberOfStudent + 1);

	// 개인 정보를 입력받는다.
	std->Input();

	// 기존값을 사용해서 새로운 전체 평균을 계산한다.
	const int current = NumberOfStudent + 1;// 현재까지 입력받은 학생 수
	const int prev = NumberOfStudent;		// 조금 전까지 입력받은 학생 수

	TotalAve = (TotalAve * prev / current) + (std->GetAverage() / current);

	// 입력받은 학생 수를 증가시킨다.
	NumberOfStudent++;

	// students 리스트에 새 노드를 추가한다.
	students.InsertNodeAfter( students.GetTail(), std);

	return true;
}

// 전체 성적을 보여준다.
void Students::ShowAll()
{
	// 실수 출력시에 소수점 이하 두 자리만 표시되도록 한다.
	cout.precision(2);
	cout << fixed;

	// 타이틀 부분을 출력한다.
	cout << "\n              < 전체 성적 보기 >";
	cout << "\n   학번  이름  국어 영어 수학 고급영어   평균\n";

	// 리스트에 있는 모든 학생의 정보를 출력한다.
	Node* current = students.GetHead()->GetNext();
	while( current != students.GetHead())
	{
		// 현재 노드의 데이타를 꺼내온다.
		const Student* std = (Student*)current->GetData();

		// 개인 성적 정보를 출력한다.
		std->Show();

		// 다음 노드를 가리킨다.
		current = current->GetNext();
	}

	// 전체 평균을 출력한다.
	cout << "\n전체 평균 = " << TotalAve << "\n";
}

// 링크드 리스트의 데이터 제거용 함수
// (링크드 리스트가 노드의 데이타를
// 제거할 때 이 함수를 호출한다.)
void Students::DeleteData(void* data)
{
	// Student 구조체를 바꿔서 제거한다.
	delete (Student*)data;
}