#include <iostream>
using namespace std;

class AAA
{
private:
	int data;
public:
	void ShowData(){
		cout << "Data : " << data << endl;
	}
	friend class BBB;
};

class BBB
{
private:
	int data;
public:
	void SetData(AAA &ref, int _data){
		// BBB class는 AAA class의 private member
		// 에 대한 접근을 허락받는다.
		// friend 키워드는 이러한 접근 제어의 권한을 설정해준다.
		// 하지만 이런 패턴은 잘 쓰이지 않는다.
		ref.data = _data;
	}
};

int main(void){

	AAA a1;
	BBB b1;

	b1.SetData(a1, 500);
	a1.ShowData();

	return 0;
}
