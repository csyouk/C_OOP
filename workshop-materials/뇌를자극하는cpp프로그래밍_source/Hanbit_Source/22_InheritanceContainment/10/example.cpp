#include <string>
using namespace std;

// �кλ� Ŭ����
class UnderGradStudent
{
public:
	string name;		// �̸�
	string department;	// �к�

	// �л� ���
	void Warn()
	{
		// ���� ����
	}
};


// ������ Ŭ����
class DormStudent
{
public:
	string building;	// ����� ��
	int roomNumber;		// ���ȣ

	// ���� �ο�
	void Warn()
	{
		// ���� ����
	}
};

// �������̸鼭 �кλ��� ���
class UnderGrad_DormStudent :
	public UnderGradStudent,
	public DormStudent
{
public:

};

int main()
{
	// �������̸鼭 �кλ��� ����� ���� ����
	UnderGrad_DormStudent std;
	std.name = "Hyun C. Lee";
	std.department = "Info & Computer Engineering";
	std.building = "NamJeKwan";
	std.roomNumber = 1529;

	// �л� ���!!
	std.Warn();

	return 0;
}
