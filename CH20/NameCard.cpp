/*
������ ������ �ǹ��ϴ� NameCard Ŭ�����̴�. �� Ŭ�������� ����,ȸ���̸�,��ȭ��ȣ,������ ����ȴ�.
������ ������ ������ ����� ���ڿ� �����̸�, ���ڿ������ �����Ҵ��� �ޱ�� �Ѵ�.
������ �������� �����Ѵ�. enum���𿡼� ������ ������ ������� ���,����,�븮,������ ���Ѵ�.

main() �Լ��� �����Ͽ� ������ �������� ����϶�.

������
�̸�: Lee
ȸ��: ABCEng
��ȭ��ȣ: 010-1111-2222
����: ���

�̸�: Hong
ȸ��: OrangeEng
��ȭ��ȣ: 010-3333-4444
����: ����

�̸�: Kim
ȸ��: SoGoodCompa
��ȭ��ȣ: 010-5555-6666
����: �븮

�Ҹ��� ȣ�⿡�� �����޸� ��� ���� ��~~
�Ҹ��� ȣ�⿡�� �����޸� ��� ���� ��~~
�Ҹ��� ȣ�⿡�� �����޸� ��� ���� ��~~
*/
#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS
{
	enum { CLERK, SENIOR, ASSIST, MANAGER };
	char * positions[] = {"���", "����", "�븮", "����"};
	char * CShowPositonInfo(int position){
		return positions[position];
	}
	void ShowPositionInfo(int position)
	{
		switch (position){
		case CLERK:
			cout << "���";
			break;
		case SENIOR:
			cout << "����";
			break;
		case ASSIST:
			cout << "�븮";
			break;
		case MANAGER:
			cout << "����";
			break;
		default:
			break;
		}
	}
}

class NameCard
{
private:
	char * name;
	char * company;
	char * phone;
	int position;
public:
	NameCard(char * _name, char * _company, char * _phone, int _pos)
	{
		//�߰�
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);

		company = new char[strlen(_company) + 1];
		strcpy(company, _company);

		phone = new char[strlen(_phone) + 1];
		strcpy(phone, _phone);

		position = _pos;
	}

	void ShowNameCardInfo()
	{
		//�߰�
		cout << "�̸� : " << name << endl;
		cout << "ȸ�� : " << company << endl;
		cout << "��ȭ��ȣ : " << phone << endl;
		//cout << "���� : ";
		//COMP_POS::ShowPositionInfo(position);
		//cout << endl;

		cout << "���� : " << COMP_POS::CShowPositonInfo(position) << endl;
	}

	~NameCard()
	{
		//�߰�
		cout << "�Ҹ��� ȣ�⿡�� �����޸� ��� ���� ��~~" << endl;
		delete[] name;
		delete[] company;
		delete[] phone;
	}
};



int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodCompa", "010-5555-6666", COMP_POS::ASSIST);

	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	return 0;
}
