#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(void){

	char s1[20] = "king";
	char s2[20] = "dom";
	char s3[50];

	cout << "s1 : " << s1 << ", " << "s2 : " << s2 << endl;
	cout << "s1.len : " << strlen(s1) << ", " << "s2.len : " << strlen(s2) << endl;

	strcpy(s3, s1);
	strcat(s3, s2);

	cout << "s3 : " << s3 << endl;

	if (s1 == s2)
		cout << "Equal." << endl;
	else
		cout << "Not Eq. " << endl;

	if (strcmp(s1,s2))
		cout << "Equal." << endl;
	else
		cout << "Not Eq. " << endl;


	string str1 = "I love";
	string str2 = " string class";
	string str3 = str1 + str2;

	cout << str1 << "," << str2 << endl;
	cout << str3 << endl;

	str1 += " C.";
	cout << str1 << endl;

	cout << "length of str1 : " << str1.length() << endl;

	str1 = "king";
	str2 = "king";
	if (str1 == str2)
		cout << "str1 == str2" << endl;
	else
		cout << "str1 != str2" << endl;

	cout << str3.substr(3,3) << endl;

	return 0;
}