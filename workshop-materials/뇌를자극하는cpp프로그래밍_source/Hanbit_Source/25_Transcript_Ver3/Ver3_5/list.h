#ifndef LIST_H
#define LIST_H

// �ϳ��� ����Ÿ�� ������ Ŭ����
class Node
{
	// List Ŭ�������� ��� �����
	// ������ �� �ֵ��� �����.
	friend class List;

public:
	Node* GetNext() const;
	Node* GetPrev() const;
	void* GetData() const;

private:
	Node* prev; // ���� Node ����ü
	Node* next;	// ���� Node ����ü
	void* data;	// ����Ÿ�� ���� ������
};

// ��ü ����Ʈ�� �����ϴ� Ŭ����
class List
{
public:
	// ����Ÿ ���Ÿ� ���� �Լ��� ������
	typedef void (*FN_DELETE)(void* );

public:
	List(FN_DELETE fnDelete = 0, bool deleteData = true);
	~List();

	void InsertNodeAfter(Node* node, void* data);
	void RemoveNode(Node* node);
	Node* GetHead() const;
	Node* GetTail() const;

	void RemoveAll();

private:
	Node* head;			// ���(����) ���
	bool deleteData;	// ����Ʈ, ��� ���Ž� ������ ���� ����
	FN_DELETE fnDel;	// ����Ÿ ���Ž� ȣ���� �Լ�
};

#endif