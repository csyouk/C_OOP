namespace this_namespace_has_a_very_long_name
{
	int n;
}

// ������ �ٿ��ش�.
namespace oh = this_namespace_has_a_very_long_name;

int main()
{
	oh::n = 100;

	return 0;
}