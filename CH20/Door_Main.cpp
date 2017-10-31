#include <iostream>
#include "Door.h"

int main(void){
	Door d1;
	d1.Open();
	d1.CurrentState();
	d1.Close();
	d1.CurrentState();

	return 0;
}