#include <iostream>
using namespace std;

// �л� ������ ���� ����ü
struct StudentInfo
{
	char name[20];	// �̸�
	int stdNumber;	// �й�
	float grade[2];	// �ֱ� 2�б� ����
};

int main()
{
	// 5 ���� �л������� ���� �迭�� �����
	// �л� ������ �ʱ�ȭ �Ѵ�.
	StudentInfo stdInfos[5] = {
		{ "Kim Chol-Su", 200121233, {3.2f, 3.5f} },
		{ "Lee Chol-Su", 200223517, {4.5f, 4.5f} },
		{ "Park Chol-Su", 200321131, {1.7f, 2.0f} },
		{ "Yang Chol-Su", 200222289, {0.4f, 4.1f} }, 
		{ "Yoon Chol-Su", 199921444, {2.7f, 2.8f} }
	};

	// �л��� ������ ����غ���.
	for (int i = 0; i < 5; ++i)
	{
		cout << stdInfos[i].name << "\n";
		cout << stdInfos[i].stdNumber << "\n";
		cout << stdInfos[i].grade[0] << ", " << stdInfos[i].grade[1] << "\n\n";
	}

	return 0;
}
