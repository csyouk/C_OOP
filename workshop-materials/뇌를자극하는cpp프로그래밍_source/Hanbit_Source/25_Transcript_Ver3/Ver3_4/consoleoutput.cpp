#include "consoleoutput.h"
#include <iostream>
#include <iomanip>
using namespace std;

// 생성자
ConsoleOutput::ConsoleOutput()
{
	columns = 0;
}

// 표를 출력하기 시작한다.
// title : 표의 제목
void ConsoleOutput::BeginTable(STR title)
{
	// 제목을 출력한다.
	cout << "\n\t\t\t" << title << "\n";
}

// 표의 헤더를 출력한다.
// headers : 헤더들
// numbers : 헤더의 개수
void ConsoleOutput::PutHeader(string headers[], int number)
{
	// 헤더의 개수를 보관한다.
	columns = number;

	// 헤더를 그려준다.
	for (int i = 0; i < number; ++i)
		cout << setw(9) << headers[i];

	cout << "\n";
}

// 표의 레코드를 출력한다.
// record : 레코드. 한 사람의 데이타를 의미한다.
void ConsoleOutput::PutRecord(string record[])
{
	// 레코드를 출력한다.
	for (int i = 0; i < columns; ++i)
		cout << setw(9) << record[i];

	cout << "\n";
}

// 표 그리기를 마친다.
void ConsoleOutput::EndTable()
{
	// 하는 일 없음. 그냥 한 칸 띄워 준다.
	cout << "\n";
}

// 화면에 문자열을 출력한다.
// text : 문자열
void ConsoleOutput::Write(STR text)
{
	cout << text << "\n";
}
