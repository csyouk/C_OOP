#include "textoutput.h"

// 생성자
TextOutput::TextOutput(STR filename)
{
	// 파일을 생성한다.
	fout.open(filename.c_str());
}

// 소멸자
TextOutput::~TextOutput()
{
	// 파일을 닫는다.
	fout.close();
}

// ostream 객체를 반환한다.
// 반환값 : ostream 객체인 fout을 반환한다.
ostream& TextOutput::StdOut()
{
	return fout;
}

