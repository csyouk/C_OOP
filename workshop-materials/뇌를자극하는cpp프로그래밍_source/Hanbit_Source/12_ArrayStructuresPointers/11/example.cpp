struct IHaveAPointer
{
	int x, y;
	long* pl;
};
	
int main()
{
	// ������ ������ �����Ѵ�.
	long l = 300;
	
	// ����ü ������ �����Ѵ�.
	IHaveAPointer ihap;
	
	// ������ ����Ű���� �����.
	ihap.pl = &l;
	
	return 0;
}
