#include <iostream>
#include <cstring>
using namespace std;

template<typename T>
T Add(T x, T y){
	return x + y;
}

template<>
const char* Add<const char*>(const char* x, const char* y){
	char * str = new char[strlen(x) + strlen(y) + 1];
	strcpy(str, x);
	strcat(str, y);
	return str;
}

template<>
char* Add<char*>(char* x, char* y){
	char * str = new char[strlen(x) + strlen(y) + 1];
	strcpy(str, x);
	strcat(str, y);
	return str;
}

int main(void){

	cout << Add(10, 20) << endl;
	cout << Add<int>(10, 20) << endl;
	cout << Add(10.1, 20.2) << endl;
	
	// �⺻���� ������ ���� ���ø� �Լ��� ����ϸ�, 
	// ���ڿ� �ּҸ� ���ϴ� �����̱� ������, ������ ����.
	// ����, ���ø� Ư��ȭ�� ����ؾ� �Ѵ�.
	cout << Add("Multi-", "Campus") << endl;

	char s1[10] = "king", s2[10] = "dom";
	cout << Add(s1, s2) << endl;

	return 0;
}