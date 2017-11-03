#include <iostream>
using namespace std;

class WhoAmI
{
public:
	int id;

	WhoAmI(int id_arg);
	void ShowYourself() const;

	static void TestThis();
};

void WhoAmI::TestThis()
{
	cout << "this = " << this << "\n";
}
