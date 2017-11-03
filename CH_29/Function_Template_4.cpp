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
	
	// 기본으로 구현해 놓은 템플릿 함수를 사용하면, 
	// 문자열 주소를 더하는 형태이기 때문에, 오류가 난다.
	// 따라서, 템플릿 특수화를 사용해야 한다.
	cout << Add("Multi-", "Campus") << endl;

	char s1[10] = "king", s2[10] = "dom";
	cout << Add(s1, s2) << endl;

	return 0;
}