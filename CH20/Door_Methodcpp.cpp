#include <iostream>
#include "Door.h"
using namespace std;


void Door::Close()
{
	state = CLOSE;
}
void Door::CurrentState(){
	cout << "���� ���� ���� : " << state << endl;
}