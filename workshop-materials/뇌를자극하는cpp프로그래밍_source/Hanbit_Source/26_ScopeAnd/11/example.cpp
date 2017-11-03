#include <iostream>
using namespace std;

class Test
{
public:
	void Func()
	{
		static int a = 0;
		cout << "a = " << ++a << "\n";
	}
};

int main()
{
	Test t1, t2, t3;

	t1.Func();
	t2.Func();
	t3.Func();

	return 0;
}
