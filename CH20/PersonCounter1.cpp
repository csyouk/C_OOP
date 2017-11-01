#include <iostream>
#include <cstring>
using namespace std;

int g_count = 1;


class Person{
private:
	char name[20];
	int age;
	static int count; // 정적멤버
public:
	// : age(_age) is colon initializer
	Person(char * _name, int _age) : age(_age){ 
		strcpy(name, _name);

		// 전역변수 접근 방법. :: 연산자를 붙여줘야 한다.
		//cout << ::g_count++ << " 번째 Person객체 생성. " ;

		cout << count++ << " 번째 Person객체 생성. ";
	}
	
	void ShowData(){
		cout << name << ", " << age << endl;
	}

	static void Counter(){ // 정적함수
		cout << "count : " << count << endl;
	}
};
// 정적변수의 초기화는 반드시 클래스 선언 후에 해야 한다.
int Person::count = 1;


int main(void){

	// 정적함수의 호출은 객체생성과 무관하게 호출할 수 있다.
	Person::Counter(); 

	Person p1("kim", 20);
	p1.ShowData();

	Person p2("lee", 20);
	p2.ShowData();

	Person p3("rim", 20);
	p3.ShowData();

	// 물론 객체에서 정적 함수를 호출할 수 있다.
	p3.Counter();

	return 0;
}
