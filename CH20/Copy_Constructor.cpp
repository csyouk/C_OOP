// Copy_Constructor.cpp
#include <iostream>
using namespace std;

class SoSimple{
private:
	int salary;
public:
	SoSimple(int _sal){
		cout << "SoSimple(int _sal) called." << endl;
		salary = _sal;
	}
	SoSimple(SoSimple & ref){
		cout << "SoSimple(SoSimple & ref) called." << endl;
		salary = ref.salary;
	}
	SoSimple& ShowData(){
		cout << "salary : " << salary << endl;
		return *this;
	}
	void Simple1(SoSimple tmp){
		// tmp변수에 복사생성자로 obj2의 내용이 복사된다.
		cout << "개체를 인자로 전달 : " << tmp.salary << endl;
	}
	SoSimple Simple2(){
		cout << "개체를 반환!!" << endl;
		SoSimple tmp(350000);
		return tmp;
	}

	SoSimple & AddSudang(int sudang){
		salary += sudang;
		return *this;
	}

};

int main(void){

	SoSimple obj1(2700000);
	// Case 1
	// 기존에 생성된 객체로 새로운 객체 초기화
	SoSimple obj2(obj1);
	obj2.ShowData();

	cout << "============\n" << endl;

	// Case 2
	// 함수 호출 시 객체를 값에 의해 전달
	// 함수의 인자로 전달될 시, 복사되면서 객체가 새로 생성된다.
	// 그 증거로 "SoSimple(SoSimple & ref) called."가 찍히는 것을 볼 수 있다.
	obj1.Simple1(obj2);

	cout << "============\n" << endl;

	// Case 3
	// 함수 내에서 객체를 값에 의해 리턴
	// 이 또한 마찬가지로, 함수가 호출된 후 스택프레임이 제거되면서
	// 리턴값으로 객체가 새로 생긴다.
	// 지금 같은 경우, 함수 내부에서 사용자 정의 생성자를 통해서 
	// 인스턴스가 하나 생성되고, 
	// 그 인스턴스를 복사해서 리턴값으로 반환하면서 인스턴스가 하나 더 생겼다.
	// tmp인스턴스의 내용이 복사생성자를 통해서 복사되어서 obj3에 할당된다.
	SoSimple obj3 = obj1.Simple2();

	obj3.ShowData();

	cout << "============\n" << endl;
	// Method chaining
	obj1.AddSudang(200000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).ShowData().\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		AddSudang(100000).AddSudang(100000).AddSudang(100000).\
		ShowData();

	return 0;
}