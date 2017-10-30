#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(void){

	char cs[20], cs2[20];  // C-style
	string cpp;   // C++-style

	cout << "input cs ? ";
	cin.getline(cs, 20);
	cout << "cs : " << cs << endl;

	/*
		cin객체는 내부에 상태정보를 저장하는 플래그를 가짐.
		이 상태정보에 따라 입력을 결정.
	*/
	if (cin.fail()) {
		cin.clear(); // cin객체의 내부상태 초기화
		cin.ignore(100, '\n'); // 100바이트 이내에서 new line이 나올때까지 buffer를 비운다.
	}

	cout << "input cs2 ? ";
	cin.getline(cs2, 20);
	cout << "cs2 : " << cs2 << endl << endl;

	cout << "input cpp ? ";
	//cin >> cpp;
	//cin.getline(cpp, 20); // 오류 cpp객체에 문자열을 복사하기 위해서 해당방식으로는 불가하다.
	getline(cin, cpp); // cin객체의 내용을 cpp로 보냄. 
	cout << "cpp : " << cpp << endl;

	return 0;
}