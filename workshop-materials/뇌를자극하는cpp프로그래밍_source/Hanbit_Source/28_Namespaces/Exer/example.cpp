#include <iostream>

namespace Mouse
{
	int buttons = 100;
}

namespace Keyboards
{
	int buttons = 200;
}

using Mouse::buttons;

int main()
{
	using Keyboards::buttons;

	std::cout << buttons << "\n";
		
	return 0;
}