#include <iostream>
#include <algorithm> // sort
#include <vector>   
using namespace std;

int main(void){
	
	vector<char> vec1;
	vec1.push_back('e'); vec1.push_back('z'); vec1.push_back('d');
	vec1.push_back('g'); vec1.push_back('a'); vec1.push_back('g');
	vec1.push_back('o'); vec1.push_back('u'); vec1.push_back('w');
	vec1.push_back('q'); vec1.push_back('s'); vec1.push_back('n');
	vec1.push_back('k'); vec1.push_back('l'); vec1.push_back('w');
	vec1.push_back('q');

	vector<char>::iterator it;
	for (it = vec1.begin(); it != vec1.end(); it++)
		cout << *it << ", ";
	cout << endl;


	return 0;
}