template<typename T>
T max(T a, T b)
{
	return (a > b ? a : b);
}

int main()
{
	int i1 = 5, i2 = 3;
	int i3 = max(i1, i2);		// i3 = 5

	double d1 = 0.9, d2 = 1.0;
	double d3 = max(d1, d2);	// d3 = 1.0


	return 0;
}