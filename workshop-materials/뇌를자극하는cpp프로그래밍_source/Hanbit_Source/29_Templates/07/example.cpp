#include <algorithm>
#include <vector>
#include <iostream>

int main()
{
	// 동적 배열을 생성해서 임의의 영문자를 추가한다.
	std::vector<char> vec;
	vec.push_back( 'e');
	vec.push_back( 'b');
	vec.push_back( 'a');
	vec.push_back( 'd');
	vec.push_back( 'c');

	// sort() 함수를 사용해서 정렬한다.
	std::sort( vec.begin(), vec.end() );

	// 정렬 후 상태를 출력한다.
	std::cout << "vector 정렬 후\n";
	std::vector<char>::iterator it;
	for (it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it;

	// 이번에는 배열을 정렬해보자.
	// 임의의 문자열을 넣은 배열을 만든다.
	char arr[5] = { 'd', 'c', 'b', 'a', 'e' };

	// sort() 함수를 사용해서 정렬한다.
	std::sort( arr, arr + 5);

	// 정렬 후 상태를 출력한다.
	std::cout << "\n\n배열 정렬 후\n";
	for (char* p = arr; p != arr + 5; ++p)
		std::cout << *p;

	std::cout << "\n";

	return 0;
}