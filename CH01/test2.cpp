#include <iostream>

bool IsPositive(int num){
	return (num > 0) ? true : false;
}

int main(void){

	int num;
	while (1)
	{
		std::cout << "Inputer any number : ";
		std::cin >> num;
		if (IsPositive(num)) {std::cout << "number is positive" << std::endl;}
		else                 {std::cout << "number is negative" << std::endl;}
	}

	return 0;
}