#ifndef LIST_H
#define LIST_H

// �ϳ��� ����Ÿ�� ������ ����ü
struct Node
{
	Node* prev; // ���� Node ����ü
	Node* next;	// ���� Node ����ü
	void* data;	// ����Ÿ�� ���� ������
};

// ��ü ����Ʈ�� �����ϴ� ����ü
struct List
{
	Node* head;	// ��� ���
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