#include <cstdio>

int main()
{
	printf("%d ", 65);	// 65
	printf("%o ", 65);	// 101
	printf("%X ", 65);	// 41
	printf("%c ", 65);	// A

	printf("%f ", 12.34);	// 0.000000
	printf("%e ", 12.34);	// 1.234000e+001

	printf("%s ¹Ìµð¾î ", "ÇÑºû");	// ÇÑºû ¹Ìµð¾î

	return 0;
}