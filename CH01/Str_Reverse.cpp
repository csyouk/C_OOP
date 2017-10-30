#include <iostream>
#include <cstring>
using namespace std;

char * ReverseString(char * chArrPtr){
	int len = strlen(chArrPtr)-1;
	char * chArr = new char[len+1];
	int i;
	for ( i = 0; i < len+1; i++)
	{
		chArr[i] = chArrPtr[len - i];
	}
	chArr[len + 1] = 0;
	return chArr;
}

int main(void){
	char original[] = "Multicampus.";
	char * copy = ReverseString(original);
	cout << "original : " << original << endl;
	cout << "copy : " << copy << endl;
	return 0;
}