#include <stdio.h>

int main(void){

	char c1;
	short int n1;
	int n2;
	float f1;
	double d1;
	char name[20];

	// A 100 200 1.5 2.5 

	printf("input c1 ? ");
	//scanf("%c", &c1);  // A + \n �� ������ ���ۿ��� \n�� ���´�.
	scanf(" %c", &c1); //���̳� ���� �����̽��� ������ ��츦 �����Ѵ�. %c �տ� �ִ� ������ 3���� �Է��� �������ش�.

	printf("input n1 ? ");
	scanf("%hd", &n1); // ������ %hd�ڷ��� �����ڰ� ���ڰ� �ƴ� �͵��� ������.��, ���ۿ� �����ִ� \n�� ������.
	
	printf("input n2 ? ");
	scanf("%hd", &n2);

	printf("input f1 ? ");
	scanf("%f", &f1);

	printf("input d1 ? ");
	scanf("%lf%*c", &d1);    // %*c �ڷ��� �����ڸ� ���ؼ� \n �� ������.

	printf("input name ? ");
	gets(name); // gets�Լ��� ������ ����Ű�� \0 ���� ġȯ�Ѵ�.
	//scanf("%s", name); // %s�� ��뼺�� �������µ�, �� ������ ������ ���� ���ϱ� �����̴�.

	printf("%c %hd %d %f %lf %s \n",
		c1, n1, n2, f1, d1, name);

	return 0;
}