#include <iostream>

const int INVALID_ARGUMENT = -1;
const int OK = 0;

int main()
{
	return 0;
}

// 데이타를 압축하는 함수
// pBufIn : 입력 데이타
// pBufOut : 출력 데이타
// nActualDataLength : 데이타의 크기 (in, out)
// 반환값 : 성공 여부
int Compress( const char* pBufIn, char* pBufOut, int& nActualDataLength)
{
	if (NULL == pBufIn || NULL == pBufOut || 0 == nActualDataLength)
		return INVALID_ARGUMENT;

	int nOutputDataLength = 0;
	for (int i = 0; i < nActualDataLength; ++i)
	{
		// 데이타를 압축하는 코드가 들어간다.
		// 자세한 코드는 생략한다.
	}

	nActualDataLength = nOutputDataLength;
	return OK;
}
