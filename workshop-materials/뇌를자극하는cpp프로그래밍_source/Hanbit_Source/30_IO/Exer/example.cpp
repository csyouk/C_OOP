#include <iostream>
#include <cstdio>
#include <string>
#include <iomanip>

// ������
std::string name = "������";
int price = 3000;
int mileage = 30;
float quality = 4.5;

int main()
{
	// C++ ��Ÿ��
	std::cout << std::setw(10) << std::left << name << "," << std::right
		<< std::setw(7) << price << "��," 
		<< std::setw(7) << std::showpos << mileage << "," << std::noshowpos
		<< std::setw(10) << std::fixed << std::setprecision(2) << quality << std::endl;

	// C ��Ÿ��
	printf("%-10s,%7d��,%+7d,%10.2f\n", name.c_str(), price, mileage, quality);

	return 0;
}