#include <iostream>
using namespace std;

// ����ü ����
union MyUnion
{
	int i;
	void* p;
};

int main()
{
	// ����ü ���� ����
	MyUnion uni;

	// uni.i�� uni.p�� �ּҸ� Ȯ������.
	cout << "&uni.i = " << &uni.i << "\n";
	cout << "&uni.p = " << &uni.p << "\n";

	// uni.i �� ���� �ְ� ����� ����Ѵ�.
	uni.i = 0x12345678;
	cout << hex;
	cout << "uni.i = " << uni.i << "\n";
	cout << "uni.p = " << uni.p << "\n";

	// uni.p �� ���� �ְ� ����� ����Ѵ�.
	uni.p = (void*)0x87654321;
	cout << "uni.i = " << uni.i << "\n";
	cout << "uni.p = " << uni.p << "\n";

	return 0;
}
