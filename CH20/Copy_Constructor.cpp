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
		// tmp������ ��������ڷ� obj2�� ������ ����ȴ�.
		cout << "��ü�� ���ڷ� ���� : " << tmp.salary << endl;
	}
	SoSimple Simple2(){
		cout << "��ü�� ��ȯ!!" << endl;
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
	// ������ ������ ��ü�� ���ο� ��ü �ʱ�ȭ
	SoSimple obj2(obj1);
	obj2.ShowData();

	cout << "============\n" << endl;

	// Case 2
	// �Լ� ȣ�� �� ��ü�� ���� ���� ����
	// �Լ��� ���ڷ� ���޵� ��, ����Ǹ鼭 ��ü�� ���� �����ȴ�.
	// �� ���ŷ� "SoSimple(SoSimple & ref) called."�� ������ ���� �� �� �ִ�.
	obj1.Simple1(obj2);

	cout << "============\n" << endl;

	// Case 3
	// �Լ� ������ ��ü�� ���� ���� ����
	// �� ���� ����������, �Լ��� ȣ��� �� ������������ ���ŵǸ鼭
	// ���ϰ����� ��ü�� ���� �����.
	// ���� ���� ���, �Լ� ���ο��� ����� ���� �����ڸ� ���ؼ� 
	// �ν��Ͻ��� �ϳ� �����ǰ�, 
	// �� �ν��Ͻ��� �����ؼ� ���ϰ����� ��ȯ�ϸ鼭 �ν��Ͻ��� �ϳ� �� �����.
	// tmp�ν��Ͻ��� ������ ��������ڸ� ���ؼ� ����Ǿ obj3�� �Ҵ�ȴ�.
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