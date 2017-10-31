#include <iostream>
using namespace std;

class AAA
{
private:
	int val;
public:
	AAA(int _val){
	//explicit AAA(int _val){
		val = _val;
	}
	void ShowData(){
		cout << "val : " << val << endl;
	}
};

int main(void){

	int val1 = 10; // C ��Ÿ�� �ʱ�ȭ
	int val2(20);  // C++ ��Ÿ�� �ʱ�ȭ, �⺻�� ��� class overloading�� �Ǿ� �ִ�.

	cout << val1 << "," << val2 << endl;

	AAA a1(100);
	a1.ShowData();

	// C ��Ÿ�Ϸ� �ʱ�ȭ�� �ϴ���, 
	// �Ͻ������� C++ ��Ÿ�Ϸ� �ʱ�ȭ�� �ȴ�.
	// AAA a2(200);
	// ������, explicit Ű���带 �����ڿ� ������, �Ͻ��� ��ȯ�� ���� �ʴ´�.
	// explicit ���� �Ʒ� �ڵ�� ������ ����.
	//AAA a2 = 200; 
	//a2.ShowData();

	return 0;
}
