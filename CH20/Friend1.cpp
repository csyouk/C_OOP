#include <iostream>
using namespace std;

class Counter
{
private:
	int val;
public:
	Counter() :val(0)
	{}
	void print(){
		cout << "value : " << val << endl;
	}
	friend void SetValue(Counter & , int );
};

void SetValue(Counter & ref, int val){
	// 접근이 안된다.
	// 전역함수에서는 private을 접근할 수 없으니..
	// 하지만 이 함수의 원형을 class에 넣은 후, friend 키워드를 추가하면
	// 아래와 같이 private member에 대한 접근이 가능하다.
	ref.val = val;

	// this 키워드는 사용 불가.
}

int main(void){

	Counter cnt;
	cnt.print();

	SetValue(cnt, 1000);
	cnt.print();
	return 0;
}
