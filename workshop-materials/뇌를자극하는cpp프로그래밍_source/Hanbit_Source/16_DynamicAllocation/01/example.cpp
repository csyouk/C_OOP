#include <iostream>
using namespace std;

int main()
{
	// �� ���� ������ �Է����� �����.
	int size;
	cout << "�� ���� ������ �Է��Ͻðڼ�? ";
	cin >> size;

	// �ʿ��� ��ŭ�� �޸𸮸� �Ҵ��Ѵ�.
	int* arr = new int [size];

	// ������ �Է¹޴´�.
	cout << "������ �Է��Ͻÿ�.\n";
	for (int i = 0; i < size; ++i)
		cin >> arr[i];

	// ����� ����ϰ� ����Ѵ�.
	int sum = 0;
	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	float ave = (float)sum / (float)size;
	cout << "�� = " << sum << ", ��� = " << ave << "\n";

	// ����� �޸𸮸� �����Ѵ�.
	delete[] arr;

	return 0;
}
