#ifndef CAT_H
#define CAT_H

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

	extern Info cats[20];	// �߿��� ����Ʈ
	extern int count;		// ��ü �߿��� ���� ��

	void CreateAll();	// ��� �߿��� ���� �Լ�
}

#endif