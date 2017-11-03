class AccessControl
{
public:
	char publicData;
	void publicFunc() {};

protected:
	int protectedData;
	void protectedFunc() {};

private:
	float privateData;
	void privateFunc() {};
};

int main()
{
	// 객체를 생성하고, 각 멤버에 접근해보자
	AccessControl ac;

	ac.publicData = 'A';	// 성공
	ac.publicFunc();		// 성공
	ac.protectedData = 100;	// 실패
	ac.protectedFunc();	// 실패
	ac.privateData = 4.5f;	// 실패
	ac.privateFunc();		// 실패

	return 0;
}
