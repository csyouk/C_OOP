#ifndef LIST_H
#define LIST_H

#include <stdexcept>
using namespace std;

// 우선은 List가 템플릿 클래스라는
// 점을 알릴 필요가 있다. 그래야
// 22번째 줄이 문제없이 컴파일 된다.
template<typename DATA>
class List;

// 하나의 데이타를 보관할 클래스
// DATA : 데이타의 타입
template <typename DATA>
class Node
{
	// List 클래스에서 모든 멤버에
	// 접근할 수 있도록 만든다.
	friend class List<DATA>;

public:
	Node* GetNext() const	{return next;}
	Node* GetPrev() const	{return prev;}
	DATA  GetData() const	{return data;}

private:
	Node* prev; // 이전 Node 구조체
	Node* next;	// 다음 Node 구조체
	DATA data;		// 데이타
};

// 전체 리스트를 관리하는 클래스
// DATA : 데이타의 타입
template<typename DATA>
class List
{
public:
	// 노드를 간결하게 하기 위해서
	// Node의 타입을 재정의해둔다.
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
	NODE* head;			// 헤드(더미) 노드
};


// 링크드 리스트의 생성자.
template<typename DATA> List<DATA>::List()
{
	// 헤드 노드를 만들고 초기화한다.
	head = new NODE;
	head->prev = head;
	head->next = head;
	head->data = 0;
}

// 링크드 리스트의 소멸자
template<typename DATA> List<DATA>::~List()
{
	// 모든 노드를 제거한다.
	RemoveAll();

	// 헤드 노드를 제거한다.
	delete head;
	head = 0;
}

// 리스트의 모든 노드를 제거한다. 
// 리스트의 모든 노드와 데이터도 제거한다.
template<typename DATA> void List<DATA>::RemoveAll()
{
	// 헤드 노드의 다음 노드부터 지운다.
	// ( 이렇게 하면 RemoveAll() 함수를 호출한 후에도
	// List 객체를 다시 사용할 수 있다)
	NODE* current = head->next;

	while(current != head)
	{
		// 현재 노드를 지울 것이므로
		// 다음 노드를 구해둔다.
		NODE* next = current->next;

		// 노드의 데이터를 제거하는 코드는 삭제되었다.
		// 이제 별도로 데이터의 제거를 신경쓸 필요가 없다.

		// 현재 노드를 제거한다.
		delete current;

		// current가 다음 노드를 가리키게 한다.
		current = next;
	}

	// 헤드 노드를 초기화한다.
	head->next = head;
	head->prev = head;
}

// 새로운 노드를 추가한다.
// node : 이 노드 뒤에 새 노드가 추가된다.
// data : 새 노드의 데이타
template<typename DATA> void List<DATA>::InsertNodeAfter(NODE* node, const DATA& data)
{
	if (NULL == node)
		throw invalid_argument("알 수 없는 오류가 있습니다.(337)");

	// node의 앞, 뒤 노드를 구해놓으면
	// 읽기 쉬운 소스 코드를 만들 수 있다.
	NODE* before = node;
	NODE* after = node->next;

	// node의 이전 노드와 다음 노드를 연결해준다.
	before->next = after;
	after->prev = before;

	// 새 노드를 만들고 초기화한다.
	NODE* newNode = new NODE;
	newNode->data = data;
	newNode->next = after;
	newNode->prev = before;

	// node의 뒤에 있던 노드가 새 노드를 가리키도록 만든다.
	after->prev = newNode;

	// 매개변수 node가 새 노드를 가리키도록 만든다.
	before->next = newNode;
}

// 노드를 제거한다.
// node : 제거할 노드
template<typename DATA> void List<DATA>::RemoveNode(NODE* node)
{
	if (NULL == node)
		throw invalid_argument("알 수 없는 오류가 있습니다.(337)");

	// node의 이전 노드와 다음 노드를 연결해준다.
	node->prev->next = node->next;
	node->next->prev = node->prev;

	// 노드의 데이터를 제거하는 코드는 삭제되었다.
	// 이제 별도로 데이터의 제거를 신경쓸 필요가 없다.

	// 현재 노드를 제거한다.
	delete node;
}


#endif

