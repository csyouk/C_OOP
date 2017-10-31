#include <iostream>
using namespace std;

const int OPEN = 1;
const int CLOSE = 2;

// Before refactor
//class Door
//{
//private:
//	int state;
//
//public:
//	void Open()
//	{
//		state = OPEN;
//	}
//	void Close()
//	{
//		state = CLOSE;
//	}
//	void CurrentState(){
//		cout << "문의 열람 상태 : " << state << endl;
//	}
//};

// After refactor
class Door
{
private:
	int state;

public:
	void Open();
	void Close();
	void CurrentState();
};

void Door::Open()
{
	state = OPEN;
}
void Door::Close()
{
	state = CLOSE;
}
void Door::CurrentState(){
	cout << "문의 열람 상태 : " << state << endl;
}

int main(void){
	Door d1;
	d1.Open();
	d1.CurrentState();
	d1.Close();
	d1.CurrentState();

	return 0;
}