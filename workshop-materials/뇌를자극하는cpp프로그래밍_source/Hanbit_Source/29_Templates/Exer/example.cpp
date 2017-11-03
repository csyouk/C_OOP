#include "list.h"
#include <iostream>

int main()
{
	// 5 ���� ���ڸ� �ִ´�.
	List<char> list;
	list.InsertNodeAfter( list.GetTail(), 'A');
	list.InsertNodeAfter( list.GetTail(), 'B');
	list.InsertNodeAfter( list.GetTail(), 'C');
	list.InsertNodeAfter( list.GetTail(), 'D');
	list.InsertNodeAfter( list.GetTail(), 'E');

	// ����Ʈ�� Ž���ϸ鼭 ����Ÿ�� ����Ѵ�.
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