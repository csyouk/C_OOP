#include <iostream>
using namespace std;

// �迭�� ���ڷ� ���� �Լ��� ����
void UsingArray( char arr[] );

int main()
{
	// �迭�� ����� �ʱ�ȭ �Ѵ�.
	char array[20] = "Hello, World!";

	// �Լ��� �迭�� �Ѱ��ش�.
	UsingArray( array);

	// �Լ� ȣ�� ���� �迭 ���¸� ����Ѵ�.
	cout << "In main() : " << array << "\n";

	return 0;
}

void UsingArray(char arr[] )
{
	// �Ѱܹ��� �迭�� ����Ѵ�.
	cout << "In UsingArray() : " << arr << "\n";

	// �迭�� ���� �ϳ��� �����غ���.
	arr[12] = '?';
}
