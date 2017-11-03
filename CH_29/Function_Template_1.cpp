#include <iostream>
using namespace std;

//double Add(double x, double y) { return x + y; }

// �Լ� ���ø��� ����Ͽ� ���ø� �Լ��� ���������.
// �Լ��� ������ �����Ϸ����� �ִ�.
// template�� �����Ϸ����� �Լ��� ������ ���� �˸���.
// T�� �ڷ����� �������� �ʰڴ�.
// �ڷ����� �����Ǵ� ������ ���ڰ� ���޵� ���̴�.
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

	// ���������� �������� Ÿ���� Ȯ���� ���ø� �Լ��� �����Ѵ�.
	cout << Add(10, 20) << endl;
	cout << Add(10.1, 20.2) << endl;
	ShowData(10, 'A');
	ShowData(2.3, 100);
	ShowData("multi", "campus");

	// ��������� �������� Ÿ���� Ȯ���� ���ø� �Լ��� ����.
	cout << Add<int>(10, 20) << endl;
	cout << Add<double>(10.1, 20.2) << endl;
	ShowData<int,char>(10, 'A');
	ShowData<double,int>(2.3, 100);
	ShowData<char *, char *>("3.8", " ������");

	// ������, ���������� �Լ��� ȣ���, �Ϲ��Լ��� ���� �켱������ �� ����.
	cout << Add(10, 20) << endl;
	// ������, ��������� ���ø� �Լ��� ȣ��ÿ��� ���ø� �Լ��� ȣ���Ѵ�.
	cout << Add<int>(10, 20) << endl;
	return 0;
}