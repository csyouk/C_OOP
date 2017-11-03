#include <iostream>
using namespace std;

class WhoAmI
{
public:
	int id;

	WhoAmI(int id);
	void ShowYourself() const;

	static void TestThis();
};

WhoAmI::WhoAmI(int id)
{
	this->id = id;
}

int main()
{
	return 0;
}
