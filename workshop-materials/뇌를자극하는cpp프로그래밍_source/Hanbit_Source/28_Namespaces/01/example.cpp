// �۸��̿� ���õ� �͵�
namespace Dog
{
	// �۸��� �� ���� ����
	struct Info
	{
		char name[20];
		int age;
	};

	Info dogs[20];	// �۸��� ����Ʈ
	int count;		// ��ü �۸��̵��� ��

	void CreateAll();	// ��� �۸��� ���� �Լ�
}

// �߿��̿� ���õ� �͵�
namespace Cat
{
	// �߿��� �� ���� ����
	class Info
	{
	public:
		void Meow();
	protected:
		char name[20];
	};

	Info cats[20];	// �߿��� ����Ʈ
	int count;		// ��ü �߿��� ���� ��

	void CreateAll();	// ��� �߿��� ���� �Լ�
}

// ��ü �۸��̿� �߿��̵��� ��
int count; 

int main()
{
	return 0;
}
