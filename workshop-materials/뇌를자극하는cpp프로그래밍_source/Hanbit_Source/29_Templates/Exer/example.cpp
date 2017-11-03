#include "list.h"
#include <iostream>

int main()
{
	// 5 개의 문자를 넣는다.
	List<char> list;
	list.InsertNodeAfter( list.GetTail(), 'A');
	list.InsertNodeAfter( list.GetTail(), 'B');
	list.InsertNodeAfter( list.GetTail(), 'C');
	list.InsertNodeAfter( list.GetTail(), 'D');
	list.InsertNodeAfter( list.GetTail(), 'E');

	// 리스트를 탐색하면서 데이타를 출력한다.
	List<char>::NODE* pNode;
	pNode = list.GetHead()->GetNext();
	while( pNode != list.GetHead() )
	{
		cout << pNode->GetData() << "\n";
		
		pNode = pNode->GetNext();
	}
	cout << "\n";

	return 0;
}