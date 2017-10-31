const int OPEN = 1;
const int CLOSE = 2;

class Door{
private:
	int state;

public:
	inline void Open();
	void Close();
	void CurrentState();
};

// 왜 인라인 함수를 헤더파일에 구현해야 하는가?
/* 
이유는 main() 에서 Open 메서드 호출 시 
함수부분으로 실행코드가 대치가 일어나는데 
이때 Door.cpp를 참조할 수 없다. 
이유는 컴파일을 소스마다 각각 일어나기 때문이다.
따라서 인라인 함수는 헤더파일에 주어 참조하게 한다.
*/

inline void Door::Open()
{
	state = OPEN;
}