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
		cin��ü�� ���ο� ���������� �����ϴ� �÷��׸� ����.
		�� ���������� ���� �Է��� ����.
	*/
	if (cin.fail()) {
		cin.clear(); // cin��ü�� ���λ��� �ʱ�ȭ
		cin.ignore(100, '\n'); // 100����Ʈ �̳����� new line�� ���ö����� buffer�� ����.
	}

	cout << "input cs2 ? ";
	cin.getline(cs2, 20);
	cout << "cs2 : " << cs2 << endl << endl;

	cout << "input cpp ? ";
	//cin >> cpp;
	//cin.getline(cpp, 20); // ���� cpp��ü�� ���ڿ��� �����ϱ� ���ؼ� �ش������δ� �Ұ��ϴ�.
	getline(cin, cpp); // cin��ü�� ������ cpp�� ����. 
	cout << "cpp : " << cpp << endl;

	return 0;
}