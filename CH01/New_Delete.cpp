#include <iostream>
#include <cstring>
using namespace std;

int main(void){

	char * str = new char[50];
	int *num = new int;
	int * nArr = new int[10];

	strcpy(str, "multicampus");

	cout << str << endl;

	*num = 50;
	cout << "*num : " << *num << endl;


	int i;

	for (i = 0; i < 10; i++)
	{
		nArr[i] = i*10 + 100;
	}

	for (i = 0; i < 10; i++)
	{
		cout << nArr[i] << ",";
	}
	cout << endl;

	delete[] str;  // 동적으로 할당받은 배열을 해제시킬 때.
	delete num;
	delete[] nArr;

	// 이미 해제한 메모리를 또 해제하려고 하면 crash가 난다.
	//delete[] str;

	// 해제한 메모리에 값을 넣으려고 하면 이 또한 crash가 난다.
	//strcpy(str, "aaa campus");

	// 권장하는 코딩 컨벤션
	str = NULL;
	num = NULL;
	nArr = NULL;
	return 0;
}