#include <iostream>
using namespace std;

class Engine
{
private:
	int model;
public:
	Engine()
	{
		model = 100;
	}
	void print()
	{
		cout << "Engine Model : " << model << endl;
	}
};

//class Car
//{
//private:
//  // static binding
//	Engine engine; 
//	int tire;
//public:
//	Car()
//	{
//		tire = 4;
//	}
//
//	void print()
//	{
//		cout << "Car 객체 생성." << endl;
//		engine.print();
//		cout << "타이어 수 : " << tire << endl;
//	}
//
//};


class Car
{
private:
	Engine * engine;
	int tire;
public:
	Car()
	{
//  // dynamic binding
		engine = new Engine;
		tire = 4;
	}
	~Car()
	{
		delete engine;
	}
	void print()
	{
		cout << "Car 객체 생성." << endl;
		engine->print();
		cout << "타이어 수 : " << tire << endl;
	}

};

int main(void){

	Car car1;
	car1.print();

	return 0;
}