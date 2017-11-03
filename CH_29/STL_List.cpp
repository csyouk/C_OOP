#include <iostream>
#include <list> // linked list를 포함하는 라이브러리.
using namespace std;
int main(void){

	list<int> intArr;

	for (int i = 0; i < 10; i++)
	  intArr.push_back(i + 10);
	
	cout << "==================" << endl;

	list<int>::iterator it; // 반복자
	for (it = intArr.begin(); it != intArr.end(); it++)
		cout << *it << ", ";
	cout << endl;

	cout << "==================" << endl;
	cout << "15 없애기" << endl;
	intArr.remove(15);
	for (it = intArr.begin(); it != intArr.end(); it++)
		cout << *it << ", ";
	cout << endl;

	cout << "==================" << endl;
	cout << "앞에 -100, 뒤에 100 넣기" << endl;
	intArr.push_back(100);
	intArr.push_front(-100);
	for (it = intArr.begin(); it != intArr.end(); it++)
		cout << *it << ", ";
	cout << endl;

	cout << "==================" << endl;
	cout << "3030 없애기" << endl;
	intArr.remove(3030);

	cout << "==================" << endl;
	cout << "2번째 노드로 이동후 삭제" << endl;

	it = intArr.begin();
	cout << *it << endl;
	it++;
	cout << *it << endl;
	it = intArr.erase(it);
	for (it = intArr.begin(); it != intArr.end(); it++)
		cout << *it << ", ";
	cout << endl;

	cout << "==================" << endl;
	cout << "3번째 노드로 이동후 300 삽입" << endl;

	it = intArr.begin();
	it++; it++;
	it = intArr.insert(it, 300);
	for (it = intArr.begin(); it != intArr.end(); it++)
		cout << *it << ", ";
	cout << endl;

	cout << "==================" << endl;
	cout << "double형 linked list 생성." << endl;
	list<double> dArr;
	dArr.push_back(1.1); dArr.push_back(2.2);
	dArr.push_back(3.3); dArr.push_back(4.4);

	// iterator는 list<T>를 가리키는 포인터이다.
	list<double>::iterator it2;
	for (it2 = dArr.begin(); it2 != dArr.end(); it2++)
		cout << *it2 << ", ";
	cout << endl;

	return 0;
}