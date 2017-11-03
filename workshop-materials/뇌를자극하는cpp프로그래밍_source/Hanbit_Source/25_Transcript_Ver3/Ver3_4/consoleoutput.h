#ifndef CONSOLE_OUTPUT_H
#define CONSOLE_OUTPUT_H

#include <string>
using namespace std;

// 소스 코드를 간결하게 하기위해서 
// 타입을 새로 정의한다.
typedef const string& STR;

// 콘솔 출력을 도와주는 클래스
class ConsoleOutput
{
public:
	ConsoleOutput();

	void BeginTable(STR title);
	void PutHeader(string headers[], int number);
	void PutRecord(string record[]);
	void EndTable();
	void Write(STR text);

protected:
	int columns;	// 헤더의 개수
};

#endif
