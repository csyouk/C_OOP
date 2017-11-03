#include "dynamicarray.h"
#include <iostream>
using namespace std;

int main()
{
	// 크기가 10인 배열 객체를 만든다.
	DynamicArray arr(10);


	// 올바른 인덱스를 참조한다
	bool b;
	b = arr.SetAt(5, 0);
	if (!b)
		cout << "arr[5] 사용 실패!!\n";

	// 일부러 범위 밖의 인덱스를 참조한다
	b = arr.SetAt(20, 0);
	if (!b)
		cout << "arr[20] 사용 실패!!\n";


	return 0;	
}

