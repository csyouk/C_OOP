#include <iostream>
#include <list> // linked list�� �����ϴ� ���̺귯��.
using namespace std;
int main(void){

	list<int> intArr;

	for (int i = 0; i < 10; i++)
	  intArr.push_back(i + 10);
	
	cout << "==================" << endl;

	list<int>::iterator it; // �ݺ���
	for (it = intArr.begin(); it != intArr.end(); it++)
		cout << *it << ", ";
	cout << endl;

	cout << "==================" << endl;
	cout << "15 ���ֱ�" << endl;
	intArr.remove(15);
	for (it = intArr.begin(); it != intArr.end(); it++)
		cout << *it << ", ";
	cout << endl;

	cout << "==================" << endl;
	cout << "�տ� -100, �ڿ� 100 �ֱ�" << endl;
	intArr.push_back(100);
	intArr.push_front(-100);
	for (it = intArr.begin(); it != intArr.end(); it++)
		cout << *it << ", ";
	cout << endl;

	cout << "==================" << endl;
	cout << "3030 ���ֱ�" << endl;
	intArr.remove(3030);

	cout << "==================" << endl;
	cout << "2��° ���� �̵��� ����" << endl;

	it = intArr.begin();
	cout << *it << endl;
	it++;
	cout << *it << endl;
	it = intArr.erase(it);
	for (it = intArr.begin(); it != intArr.end(); it++)
		cout << *it << ", ";
	cout << endl;

	cout << "==================" << endl;
	cout << "3��° ���� �̵��� 300 ����" << endl;

	it = intArr.begin();
	it++; it++;
	it = intArr.insert(it, 300);
	for (it = intArr.begin(); it != intArr.end(); it++)
		cout << *it << ", ";
	cout << endl;

	cout << "==================" << endl;
	cout << "double�� linked list ����." << endl;
	list<double> dArr;
	dArr.push_back(1.1); dArr.push_back(2.2);
	dArr.push_back(3.3); dArr.push_back(4.4);

	// iterator�� list<T>�� ����Ű�� �������̴�.
	list<double>::iterator it2;
	for (it2 = dArr.begin(); it2 != dArr.end(); it2++)
		cout << *it2 << ", ";
	cout << endl;

	return 0;
}