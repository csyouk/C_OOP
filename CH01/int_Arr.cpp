#include <iostream>
using namespace std;

int * NumAdd(int size){
	int i;
	int * nArr = new int[size];
	for (i = 0; i < size; i++)
	{
		cout << "Input "<< i <<"-th elements of integer array : ";
		cin >> nArr[i];
	}
	return nArr;
}

int main(void){
	int size;
	int i;
	cout << "Input size of array : ";
	cin >> size;

	int * retArr = NumAdd(size);

	for (i = 0; i < size; i++)
		cout << retArr[i] << ",";
	cout << endl;

	delete[] retArr;
	retArr = NULL;

	return 0;
}