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

// �� �ζ��� �Լ��� ������Ͽ� �����ؾ� �ϴ°�?
/* 
������ main() ���� Open �޼��� ȣ�� �� 
�Լ��κ����� �����ڵ尡 ��ġ�� �Ͼ�µ� 
�̶� Door.cpp�� ������ �� ����. 
������ �������� �ҽ����� ���� �Ͼ�� �����̴�.
���� �ζ��� �Լ��� ������Ͽ� �־� �����ϰ� �Ѵ�.
*/

inline void Door::Open()
{
	state = OPEN;
}