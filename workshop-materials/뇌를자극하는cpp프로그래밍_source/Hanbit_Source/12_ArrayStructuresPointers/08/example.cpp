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
	// �л��� ���� ������ �����Ѵ�.
	StudentInfo si = { "Kim Chol-Su", 200121233, {3.2f, 3.5f} };

	// �л��� ������ ����غ���.
	cout << si.name << "\n";
	cout << si.stdNumber << "\n";
	cout << si.grade[0] << ", " << si.grade[1] << "\n";

	return 0;
}
