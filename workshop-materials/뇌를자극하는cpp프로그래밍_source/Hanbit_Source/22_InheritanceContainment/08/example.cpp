class Parent
{
private:
	int	priv;

protected:
	int prot;

public:
	int pub;
};

class Child : public Parent
{
public:
	void AccessParents()
	{
		int n;

		// 부모의 멤버에 접근을 시도
		n = priv;	// 실패
		n = prot;	// 성공
		n = pub;	// 성공
	}
};

int main()
{
	Parent pa;

	// 객체의 멤버에 접근을 시도
	int n;
	n = pa.priv;	// 실패
	n = pa.prot;	// 실패
	n = pa.pub;	// 성공

	return 0;
}
