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

		// �θ��� ����� ������ �õ�
		n = priv;	// ����
		n = prot;	// ����
		n = pub;	// ����
	}
};

int main()
{
	Parent pa;

	// ��ü�� ����� ������ �õ�
	int n;
	n = pa.priv;	// ����
	n = pa.prot;	// ����
	n = pa.pub;	// ����

	return 0;
}
