#ifndef LIST_H
#define LIST_H

#include <stdexcept>
using namespace std;

// �켱�� List�� ���ø� Ŭ�������
// ���� �˸� �ʿ䰡 �ִ�. �׷���
// 22��° ���� �������� ������ �ȴ�.
template<typename DATA>
class List;

// �ϳ��� ����Ÿ�� ������ Ŭ����
// DATA : ����Ÿ�� Ÿ��
template <typename DATA>
class Node
{
	// List Ŭ�������� ��� �����
	// ������ �� �ֵ��� �����.
	friend class List<DATA>;

public:
	Node* GetNext() const	{return next;}
	Node* GetPrev() const	{return prev;}
	DATA  GetData() const	{return data;}

private:
	Node* prev; // ���� Node ����ü
	Node* next;	// ���� Node ����ü
	DATA data;		// ����Ÿ
};

// ��ü ����Ʈ�� �����ϴ� Ŭ����
// DATA : ����Ÿ�� Ÿ��
template<typename DATA>
class List
{
public:
	// ��带 �����ϰ� �ϱ� ���ؼ�
	// Node�� Ÿ���� �������صд�.
	typedef Node<DATA> NODE;

public:
	List();
	~List();

	void InsertNodeAfter(NODE* node,const DATA& data);
	void RemoveNode(NODE* node);
	NODE* GetHead() const {return head;}
	NODE* GetTail() const {return head->prev;}

	void RemoveAll();

private:
	NODE* head;			// ���(����) ���
};


// ��ũ�� ����Ʈ�� ������.
template<typename DATA> List<DATA>::List()
{
	// ��� ��带 ����� �ʱ�ȭ�Ѵ�.
	head = new NODE;
	head->prev = head;
	head->next = head;
	head->data = 0;
}

// ��ũ�� ����Ʈ�� �Ҹ���
template<typename DATA> List<DATA>::~List()
{
	// ��� ��带 �����Ѵ�.
	RemoveAll();

	// ��� ��带 �����Ѵ�.
	delete head;
	head = 0;
}

// ����Ʈ�� ��� ��带 �����Ѵ�. 
// ����Ʈ�� ��� ���� �����͵� �����Ѵ�.
template<typename DATA> void List<DATA>::RemoveAll()
{
	// ��� ����� ���� ������ �����.
	// ( �̷��� �ϸ� RemoveAll() �Լ��� ȣ���� �Ŀ���
	// List ��ü�� �ٽ� ����� �� �ִ�)
	NODE* current = head->next;

	while(current != head)
	{
		// ���� ��带 ���� ���̹Ƿ�
		// ���� ��带 ���صд�.
		NODE* next = current->next;

		// ����� �����͸� �����ϴ� �ڵ�� �����Ǿ���.
		// ���� ������ �������� ���Ÿ� �Ű澵 �ʿ䰡 ����.

		// ���� ��带 �����Ѵ�.
		delete current;

		// current�� ���� ��带 ����Ű�� �Ѵ�.
		current = next;
	}

	// ��� ��带 �ʱ�ȭ�Ѵ�.
	head->next = head;
	head->prev = head;
}

// ���ο� ��带 �߰��Ѵ�.
// node : �� ��� �ڿ� �� ��尡 �߰��ȴ�.
// data : �� ����� ����Ÿ
template<typename DATA> void List<DATA>::InsertNodeAfter(NODE* node, const DATA& data)
{
	if (NULL == node)
		throw invalid_argument("�� �� ���� ������ �ֽ��ϴ�.(337)");

	// node�� ��, �� ��带 ���س�����
	// �б� ���� �ҽ� �ڵ带 ���� �� �ִ�.
	NODE* before = node;
	NODE* after = node->next;

	// node�� ���� ���� ���� ��带 �������ش�.
	before->next = after;
	after->prev = before;

	// �� ��带 ����� �ʱ�ȭ�Ѵ�.
	NODE* newNode = new NODE;
	newNode->data = data;
	newNode->next = after;
	newNode->prev = before;

	// node�� �ڿ� �ִ� ��尡 �� ��带 ����Ű���� �����.
	after->prev = newNode;

	// �Ű����� node�� �� ��带 ����Ű���� �����.
	before->next = newNode;
}

// ��带 �����Ѵ�.
// node : ������ ���
template<typename DATA> void List<DATA>::RemoveNode(NODE* node)
{
	if (NULL == node)
		throw invalid_argument("�� �� ���� ������ �ֽ��ϴ�.(337)");

	// node�� ���� ���� ���� ��带 �������ش�.
	node->prev->next = node->next;
	node->next->prev = node->prev;

	// ����� �����͸� �����ϴ� �ڵ�� �����Ǿ���.
	// ���� ������ �������� ���Ÿ� �Ű澵 �ʿ䰡 ����.

	// ���� ��带 �����Ѵ�.
	delete node;
}


#endif

