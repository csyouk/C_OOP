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
	//scanf("%c", &c1);  // A + \n 를 누르면 버퍼에는 \n가 남는다.
	scanf(" %c", &c1); //탭이나 엔터 스페이스가 들어오는 경우를 무시한다. %c 앞에 있는 공백이 3가지 입력을 무시해준다.

	printf("input n1 ? ");
	scanf("%hd", &n1); // 하지만 %hd자료형 지정자가 숫자가 아닌 것들을 버린다.즉, 버퍼에 남아있는 \n를 버린다.
	
	printf("input n2 ? ");
	scanf("%hd", &n2);

	printf("input f1 ? ");
	scanf("%f", &f1);

	printf("input d1 ? ");
	scanf("%lf%*c", &d1);    // %*c 자료형 지정자를 통해서 \n 를 버린다.

	printf("input name ? ");
	gets(name); // gets함수는 마지막 엔터키를 \0 으로 치환한다.
	//scanf("%s", name); // %s는 사용성이 떨어지는데, 그 이유는 공백을 받지 못하기 때문이다.

	printf("%c %hd %d %f %lf %s \n",
		c1, n1, n2, f1, d1, name);

	return 0;
}