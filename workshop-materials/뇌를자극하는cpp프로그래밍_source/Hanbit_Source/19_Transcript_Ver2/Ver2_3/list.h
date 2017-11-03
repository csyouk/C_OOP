#ifndef LIST_H
#define LIST_H

// 하나의 데이타를 보관할 구조체
struct Node
{
	Node* prev; // 이전 Node 구조체
	Node* next;	// 다음 Node 구조체
	void* data;	// 데이타에 대한 포인터
};

// 전체 리스트를 관리하는 구조체
struct List
{
	Node* head;	// 헤드 노드
};


List* CreateList();
void RemoveList(List* list, bool deleteData);
Node* GetTail(List* list);

void InsertNodeAfter(Node* node, void* data);
void RemoveNode(Node* node);
Node* GetNext(Node* node);
Node* GetPrev(Node* node);
void* GetData(Node* node);

#endif