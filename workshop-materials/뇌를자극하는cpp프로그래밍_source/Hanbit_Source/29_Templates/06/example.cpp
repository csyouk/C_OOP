#include <list>
#include <iostream>

int main()
{
	// int Ÿ���� ������ũ�� ����Ʈ ����
	std::list<int> intList;

	// 1 ~ 10���� ��ũ�� ����Ʈ�� �ִ´�.
	for (int i = 0; i < 10; ++i)
		intList.push_back( i);

	// 5�� ã�Ƽ� �����Ѵ�.
	intList.remove( 5);

	// ��ũ�� ����Ʈ�� ������ ����Ѵ�.
	std::list<int>::iterator it;
	for (it = intList.begin(); it != intList.end(); ++it)
		std::cout << *it << "\n";


	return 0;
}