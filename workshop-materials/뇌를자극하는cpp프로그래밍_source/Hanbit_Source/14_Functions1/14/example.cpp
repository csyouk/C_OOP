#include <iostream>
using namespace std;

// 배열을 인자로 갖는 함수의 원형
void UsingArray( char arr[] );

int main()
{
	// 배열을 만들고 초기화 한다.
	char array[20] = "Hello, World!";

	// 함수에 배열을 넘겨준다.
	UsingArray( array);

	// 함수 호출 후의 배열 상태를 출력한다.
	cout << "In main() : " << array << "\n";

	return 0;
}

void UsingArray(char arr[] )
{
	// 넘겨받은 배열을 출력한다.
	cout << "In UsingArray() : " << arr << "\n";

	// 배열의 원소 하나를 수정해본다.
	arr[12] = '?';
}
