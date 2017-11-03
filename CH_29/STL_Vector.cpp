#include <iostream>
#include <algorithm> // sort
#include <vector>   
#include <functional>
using namespace std;

int main(void){
	
	vector<char> vec1;
	vec1.push_back('e'); vec1.push_back('z'); vec1.push_back('d'); vec1.push_back('g'); vec1.push_back('a'); vec1.push_back('g'); vec1.push_back('o'); vec1.push_back('u'); vec1.push_back('w'); vec1.push_back('q'); vec1.push_back('s'); vec1.push_back('n'); vec1.push_back('k'); vec1.push_back('l'); vec1.push_back('w'); vec1.push_back('q');

	vector<char>::iterator it;
	for (it = vec1.begin(); it != vec1.end(); it++)
		cout << *it << ", ";
	cout << endl;

	// 해당 정렬은 오름차순만 지원한다.
	sort(vec1.begin(), vec1.end()); 
	for (it = vec1.begin(); it != vec1.end(); it++)
		cout << *it << ", ";
	cout << endl;

	// 내림차순으로 정렬하려면
	sort(vec1.begin(), vec1.end(), greater<char>());
	for (it = vec1.begin(); it != vec1.end(); it++)
		cout << *it << ", ";
	cout << endl;

	// 고정배열
	char arr[5] = { 'D', 'S', 'Z', 'A', 'G' };
	//arr[5] = 'A';
	
	// 고정배열또한 sorting이 가능하다.
	sort(arr, arr + 5);
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ", ";
	cout << endl;
	return 0;
}