#include <iostream>
using namespace std;

template<typename T>
class Stack
{
private:
   int topIdx;   // 마지막 입력된 위치의 인덱스.
	 T* stackPtr;  // 스택 포인터.
   int size;
public:
	Stack(int s = 10);
	~Stack();
	void Push(const T& pushValue);
	T Pop();
};

template<typename T>
Stack<T>::Stack(int len=0)  // 생성자의 인수가 반드시 있어야 한다.
{
	topIdx=-1;		// 스택 인덱스 초기화.
	stackPtr = new T[len];	// 데이터 저장 위한 배열 선언.
	size=len;
}

template<typename T>
Stack<T>::~Stack() { delete[] stackPtr; } 

template<typename T>
void Stack<T>::Push(const T& pushValue)
{ // 스택에 데이터 입력.
	if(topIdx>=(size-1))
	{
		cout<<"stack full !!!"<<endl;
		return;
	}
	stackPtr[++topIdx]=pushValue;
}

template<typename T>
T Stack<T>::Pop()
{ // 스택에서 데이터 꺼냄.
	if(topIdx<0)
	{
		cout<<"stack empty !!!"<<endl;
		return 32; // 32 means ' ' , space
	}
	return stackPtr[topIdx--];
}

int main()
{
	Stack<char> stack(10);

	for(int i=0; i<11; i++)
	   stack.Push('A'+i);

	for(int i=0; i<11; i++)
	  cout<<stack.Pop()<<endl;
	
	cout << "======================" << endl << endl;

	for (int i = 0; i<10; i++)
		stack.Push('A' + i);
	for (int i = 0; i<10; i++)
		cout << stack.Pop() << endl;

	cout << "======================" << endl << endl;

	Stack<int> stack2(10);
	for (int i = 0; i < 11; i++)
		stack2.Push(10 + i);
	for (int i = 0; i < 11; i++)
		cout << stack2.Pop() << endl;


	cout << "======================" << endl << endl;

	Stack<double> stack3(10);
	for (int i = 0; i < 11; i++)
		stack3.Push(10.1 + i);
	for (int i = 0; i < 11; i++)
		cout << stack3.Pop() << endl;

	return 0;
}
