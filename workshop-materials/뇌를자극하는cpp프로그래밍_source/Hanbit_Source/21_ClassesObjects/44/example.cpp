#include <iostream>
using namespace std;

class WhoAmI
{
public:
	int id;

	WhoAmI(int id_arg);
	void ShowYourself() const;
};

WhoAmI:: WhoAmI(int id_arg)
{
	id = id_arg;
}

void WhoAmI::ShowYourself() const
{
	cout << "{ID = " << id << ", this = " << this << "}\n";
}

int main()
{
	// �� ���� ��ü�� �����.
	WhoAmI obj1( 1);
	WhoAmI obj2( 2);
	WhoAmI obj3( 3);

	// ��ü���� ������ ����Ѵ�.
	obj1.ShowYourself();
	obj2.ShowYourself();
	obj3.ShowYourself();

	// ��ü���� �ּҸ� ����Ѵ�.
	cout << "&obj1 = " << &obj1 << "\n";
	cout << "&obj2 = " << &obj2 << "\n";
	cout << "&obj3 = " << &obj3 << "\n";

	return 0;
}
