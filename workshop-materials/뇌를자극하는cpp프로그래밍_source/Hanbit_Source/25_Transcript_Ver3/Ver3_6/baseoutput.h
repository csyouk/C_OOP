#ifndef BASE_OUTPUT_H
#define BASE_OUTPUT_H

#include <string>
using namespace std;

// 소스 코드를 간결하게 하기위해서 
// 타입을 새로 정의한다.
typedef const string& STR;

// 출력 클래스들의 인터페이스를 정의하는
// 추상 클래스
class BaseOutput
{
public:
	virtual void BeginTable(STR title) = 0;
	virtual void PutHeader(string headers[], int number) = 0;
	virtual void PutRecord(string record[]) = 0;
	virtual void EndTable() = 0;
	virtual void Write(STR text) = 0;

	virtual ~BaseOutput() {};
};

#endif
