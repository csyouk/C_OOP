#include <algorithm>
#include <vector>
#include <iostream>

int main()
{
	// ���� �迭�� �����ؼ� ������ �����ڸ� �߰��Ѵ�.
	std::vector<char> vec;
	vec.push_back( 'e');
	vec.push_back( 'b');
	vec.push_back( 'a');
	vec.push_back( 'd');
	vec.push_back( 'c');

	// sort() �Լ��� ����ؼ� �����Ѵ�.
	std::sort( vec.begin(), vec.end() );

	// ���� �� ���¸� ����Ѵ�.
	std::cout << "vector ���� ��\n";
	std::vector<char>::iterator it;
	for (it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it;

	// �̹����� �迭�� �����غ���.
	// ������ ���ڿ��� ���� �迭�� �����.
	char arr[5] = { 'd', 'c', 'b', 'a', 'e' };

	// sort() �Լ��� ����ؼ� �����Ѵ�.
	std::sort( arr, arr + 5);

	// ���� �� ���¸� ����Ѵ�.
	std::cout << "\n\n�迭 ���� ��\n";
	for (char* p = arr; p != arr + 5; ++p)
		std::cout << *p;

	std::cout << "\n";

	return 0;
}