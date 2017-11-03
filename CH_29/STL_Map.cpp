#include <iostream>
#include <string>
#include <map>
using namespace std;

struct sProduct
{
	string name;
	int price;
}Pro[] = { { "사과", 1000 }, { "배", 3000 }, { "포도", 8400 }, { "두리안", 9800 }, { "자몽", 2500 }};

int main(void){
	string input;

	map<string, int> mapPro;
	map<string, int>::iterator it;

	for (int i = 0; i < sizeof(Pro)/sizeof(Pro[0]) ; i++)
	  mapPro.insert(make_pair(Pro[i].name, Pro[i].price)); 
													// key  -------- value   

	while (true)
	{
		cout << endl << "검색할 과일 ? ";
		cin >> input;
		if (input == "end") break;
		
		it = mapPro.find(input);
		if (it == mapPro.end())
			cout << "Not Found." << endl;
		else
			cout << it->first << " 의 가격은 : " << it->second << endl;
							// it->first는 key에 해당       it->second는 value에 해당.
	}

	return 0;
}