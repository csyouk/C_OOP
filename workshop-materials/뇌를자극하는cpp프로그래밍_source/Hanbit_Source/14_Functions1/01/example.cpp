#include <iostream>

const int INVALID_ARGUMENT = -1;
const int OK = 0;

int main()
{
	return 0;
}

// ����Ÿ�� �����ϴ� �Լ�
// pBufIn : �Է� ����Ÿ
// pBufOut : ��� ����Ÿ
// nActualDataLength : ����Ÿ�� ũ�� (in, out)
// ��ȯ�� : ���� ����
int Compress( const char* pBufIn, char* pBufOut, int& nActualDataLength)
{
	if (NULL == pBufIn || NULL == pBufOut || 0 == nActualDataLength)
		return INVALID_ARGUMENT;

	int nOutputDataLength = 0;
	for (int i = 0; i < nActualDataLength; ++i)
	{
		// ����Ÿ�� �����ϴ� �ڵ尡 ����.
		// �ڼ��� �ڵ�� �����Ѵ�.
	}

	nActualDataLength = nOutputDataLength;
	return OK;
}
