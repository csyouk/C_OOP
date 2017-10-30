#include <iostream>
#include <windows.h>

using namespace std;

namespace BestCom{

	void ShowDate(){
		SYSTEMTIME systime;
		GetLocalTime(&systime);
		cout << "ShowDate() : ";
		cout << systime.wYear << " Year " << systime.wMonth
			<< " Month " << systime.wDay << " Day " << endl;
	}

	void Method1(){
		cout << "best com method 1 invoked\n" << endl;
		ShowDate();
	}

	void SimpleFunc(){
		cout << "Best com SimpleFunc invoked" << endl;
	}
}

namespace ProgCom
{
	void Method2()
	{
		cout << "prog com method2 invoked \n" << endl;
	}

	void SimpleFunc(){
		cout << "Prog com SimpleFunc invoked" << endl;
	}
}

using namespace ProgCom;
using namespace BestCom;

int main(void){

	Method1();
	Method2();
	BestCom::SimpleFunc();
	ProgCom::SimpleFunc();
}