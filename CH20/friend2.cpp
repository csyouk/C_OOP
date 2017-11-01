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
		// BBB class�� AAA class�� private member
		// �� ���� ������ ����޴´�.
		// friend Ű����� �̷��� ���� ������ ������ �������ش�.
		// ������ �̷� ������ �� ������ �ʴ´�.
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
