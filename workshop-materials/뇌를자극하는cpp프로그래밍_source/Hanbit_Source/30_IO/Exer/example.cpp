#include <iostream>
#include <cstdio>
#include <string>
#include <iomanip>

// 데이터
std::string name = "휴지통";
int price = 3000;
int mileage = 30;
float quality = 4.5;

int main()
{
	// C++ 스타일
	std::cout << std::setw(10) << std::left << name << "," << std::right
		<< std::setw(7) << price << "원," 
		<< std::setw(7) << std::showpos << mileage << "," << std::noshowpos
		<< std::setw(10) << std::fixed << std::setprecision(2) << quality << std::endl;

	// C 스타일
	printf("%-10s,%7d원,%+7d,%10.2f\n", name.c_str(), price, mileage, quality);

	return 0;
}