#include <iostream>
using namespace std;

int x = 100;

int main()
{
	cout << "1. x = " << x << "\n";

	int x = 200;

	cout << "2. x = " << x << "\n";

	{
		cout << "3. x = " << x << "\n";

		int x = 300;

		cout << "4. x = " << x << "\n";
	}

	cout << "5. x = " << x << "\n";

	return 0;
}
