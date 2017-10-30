#include <iostream>
using namespace std;

int BoxVolume(int x, int y = 1, int z = 1){
	return x*y*z;
}

int main(void){
	cout << BoxVolume(3, 4, 5) << endl;
	cout << BoxVolume(3, 4) << endl;
	cout << BoxVolume(3) << endl;
	return 0;
}