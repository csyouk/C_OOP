#include <memory>
using namespace std;

int main()
{
	// ����Ʈ ������ ����
	auto_ptr<int> p( new int );

	// ����Ʈ �������� ���
	*p = 100;

	// �޸𸮸� ���� ������ �� �ʿ䰡 ����

	return 0;
}