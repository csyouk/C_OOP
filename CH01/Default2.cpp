#include <iostream>
using namespace std;

// 이러한 함수 또한 선언하는 것이 좋지 않다.
//int Func(){return 100;} 
int Func(int x=0){ return x+100;}

int main(void){
	
	cout << Func(500) << endl;

	// 애매모호한 메소드 호출
	//cout << Func() << endl; 

	return 0;
}