#include <iostream>
#include "Door.h"
using namespace std;


void Door::Close()
{
	state = CLOSE;
}
void Door::CurrentState(){
	cout << "문의 열람 상태 : " << state << endl;
}