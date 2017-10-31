#include <iostream>
using namespace std;

class AAA{
public:
	AAA(){
		cout << "AAA() 호출." << endl; 
	}
	~AAA(){ // 메모리 반납, 파일 시스템 연결종료, 네트워크에 대한 정리.
		cout << "~AAA() 호출." << endl;
	}
};

int main(void){
	AAA a1;
	AAA a2;

	AAA * a3 = new AAA();

	return 0;
}