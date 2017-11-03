#include <iostream>
using namespace std;

//double Add(double x, double y) { return x + y; }

// 함수 템플릿을 사용하여 템플릿 함수가 만들어졌다.
// 함수의 생성은 컴파일러에게 있다.
// template은 컴파일러에게 함수를 정의할 것을 알린다.
// T는 자료형을 결정짓지 않겠다.
// 자료형이 결정되는 시점은 인자가 전달될 때이다.
template<typename T>
T Add(T x, T y){
	cout << "T Add(T x, T y)" << endl;
	return x + y; 
}

int Add(int x, int y) { 
	cout << "int Add(int x, int y)" << endl;
	return x + y; 
}

template<typename T1, typename T2>
T1 Add2(T1 x, T2 y){ return x + y; }

template<typename T1, typename T2>
void ShowData(T1 arg1, T2 arg2) { cout << arg1 << "," << arg2 << endl; }

int main(void){

	// 묵시적으로 데이터의 타입을 확인후 템플릿 함수를 생성한다.
	cout << Add(10, 20) << endl;
	cout << Add(10.1, 20.2) << endl;
	ShowData(10, 'A');
	ShowData(2.3, 100);
	ShowData("multi", "campus");

	// 명시적으로 데이터의 타입을 확인후 템플릿 함수를 생성.
	cout << Add<int>(10, 20) << endl;
	cout << Add<double>(10.1, 20.2) << endl;
	ShowData<int,char>(10, 'A');
	ShowData<double,int>(2.3, 100);
	ShowData<char *, char *>("3.8", " 데이터");

	// 하지만, 묵시적으로 함수를 호출시, 일반함수에 대한 우선순위가 더 높다.
	cout << Add(10, 20) << endl;
	// 하지만, 명시적으로 템플릿 함수를 호출시에는 템플릿 함수를 호출한다.
	cout << Add<int>(10, 20) << endl;
	return 0;
}