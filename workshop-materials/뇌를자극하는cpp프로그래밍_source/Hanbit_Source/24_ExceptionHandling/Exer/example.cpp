#include <iostream>
#include <cstring>
#include <memory>
using namespace std;

// �߸��� ���ڸ� �ǹ��ϴ� Ŭ����
class InvalidArgument
{
};

// ���ڿ��� �����´�
void Reverse(char* str)
{
	// ���ڰ� �ùٸ��� Ȯ���Ѵ�.
	if (NULL == str)
		throw InvalidArgument();

	// ���ڿ��� ���̸� ���.
	int len = strlen(str);

	// ���ڿ��� ������ �޸𸮸� �Ҵ��Ѵ�.
	char* new_str = new char[len + 1];

	// ���ڿ��� ����� �����Ѵ�.
	for (int i = 0; i < len; ++i)
		new_str[i] = str[len - i - 1];

	// �� ���ڿ��� ���� NULL ���ڸ� �ִ´�.
	new_str[len] = '\0';

	// �� ���ڿ��� ���� ���ڿ��� �����Ѵ�.
	strcpy( str, new_str);

	// �޸𸮸� �����Ѵ�.
	delete[] new_str;
}

int main()
{
	try
	{
		// ����ڷκ��� �Է¹��� ���ڿ�
		char user_str[10];

		// ���ڿ��� �Է¹޴´�.
		cout << "���ڿ��� �Է��ϼ��� : ";
		cin.get( user_str, 10);

		// ���ڿ��� �����´�.
		Reverse( user_str);

		// ������ ���ڿ��� ����Ѵ�.
		cout << "�������� �̷��� �˴ϴ� : " << user_str << "\n";
	}
	catch(InvalidArgument& ex)
	{
		// "���ڰ� �߸��Ǿ����ϴ�"��� ���� �޽��� ���ٴ�
		// ����ڰ� �˾Ƶ��� �� �ִ� ������ �޽����� ����ϴ� ���� ����.
		// �ٸ� �����ڴ� � ������ �߻��ߴ��� �˾ƾ� �ϹǷ�
		// ��ȣ �ȿ� �����ڸ� �� �� �ִ� ���� ��ȣ ���� ���� 
		// �־�δ� ���� ���� �����̴�.
		cout << "������ �߻��߽��ϴ�(100)\n";
	}
	catch(bad_alloc& ex)
	{
		// bad_alloc �� ���� Reverse() �Լ� �ȿ��� ���� �ʿ�� ����.
		// bad_alloc �� �޾��� �� ������ �ؾ� �� �� �ƴ�
		// �Լ��� ������ �ȴ�.
		// main() �Լ��� bad_alloc �� �޾��� �� �޸𸮰� �����ϴٴ�
		// ���� �޽����� ����ؾ� �Ѵٴ� ����� �ȴ�.

		cout << "�޸𸮰� �����մϴ�\n";
	}

	return 0;
}