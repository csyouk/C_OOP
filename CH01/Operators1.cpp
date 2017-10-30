#include <iostream>
#include <bitset>
//using namespace std;
/*
STL의 bitset 컨테이너는 바이너리(0,1)을 담기 위한 구조이다
bitset(8)은 비어있는 배열을 만들고,
그 배열에 이진수 값을 채운다.
*/
int main(void)
{
	unsigned char a, b;
	unsigned char c1, c2, c3, c4;

	a = 10; b = 7;
	c1 = a & b;
	c2 = a | b;
	c3 = a ^ b;
	c4 = ~a;

	std::cout << "a : " << std::bitset<8>(a) 
		<< "(" << (unsigned int)a << ")" << std::endl;

	std::cout << "b : " << std::bitset<8>(b)
		<< "(" << (unsigned int)b << ")" << std::endl;

	std::cout << "c1 : " << std::bitset<8>(c1)
		<< "(" << (unsigned int)c1 << ")" << std::endl;

	std::cout << "c2 : " << std::bitset<8>(c2)
		<< "(" << (unsigned int)c2 << ")" << std::endl;

	std::cout << "c3 : " << std::bitset<8>(c3)
		<< "(" << (unsigned int)c3 << ")" << std::endl;

	std::cout << "c4 : " << std::bitset<8>(c4)
		<< "(" << (unsigned int)c4 << ")" << std::endl;

	return 0;
}