#include <iostream>
#include <cstring>

using namespace std;

char * ReverseString(char * chArrPtr){
	int len = strlen(chArrPtr)-1;
	char * reverse = new char[len+1];
	int i;
	for ( i = 0; i < len+1; i++)
		reverse[i] = chArrPtr[len - i];
	
	reverse[len] = NULL;
	return reverse;
}

int main(void){
	char original[] = "Multicampus.";
	char * copy = ReverseString(original);
	cout << "original : " << original << endl;
	cout << "copy : " << copy << endl;

	delete[] copy; // copy�� �ּҸ� ������ �ִ�.
	copy = NULL;
	return 0;
}