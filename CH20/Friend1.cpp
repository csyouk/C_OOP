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
	// ������ �ȵȴ�.
	// �����Լ������� private�� ������ �� ������..
	// ������ �� �Լ��� ������ class�� ���� ��, friend Ű���带 �߰��ϸ�
	// �Ʒ��� ���� private member�� ���� ������ �����ϴ�.
	ref.val = val;

	// this Ű����� ��� �Ұ�.
}

int main(void){

	Counter cnt;
	cnt.print();

	SetValue(cnt, 1000);
	cnt.print();
	return 0;
}
