#include <iostream>

class AAA
{
private:
	int n;
public:
	AAA(int n)
	{
		this->n = n;
	}

	~AAA()
	{
		std::cout << "destroyed." << std::endl;
	}

	void ShowData(void) const
	{
		std::cout << "data : " << n << std::endl;
	}
};


int main(void){

	const AAA a1 = AAA(2);
	a1.ShowData();
	return 0;
}