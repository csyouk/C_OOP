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

	delete[] str;  // �������� �Ҵ���� �迭�� ������ų ��.
	delete num;
	delete[] nArr;

	// �̹� ������ �޸𸮸� �� �����Ϸ��� �ϸ� crash�� ����.
	//delete[] str;

	// ������ �޸𸮿� ���� �������� �ϸ� �� ���� crash�� ����.
	//strcpy(str, "aaa campus");

	// �����ϴ� �ڵ� ������
	str = NULL;
	num = NULL;
	nArr = NULL;
	return 0;
}