#include <stdio.h>
#include <stdlib.h>
int ex3_4(void)
{
	float a, b;
	char oper;
	printf("�j�ƾǮa\n");
	printf("��J�Ĥ@��:");
	scanf("%f", &a);
	printf("��J�ĤG��:");
	scanf("%f", &b);
	printf("��J�B��Ÿ� +,-,*,/ :");
	scanf(" %c", &oper);
	switch (oper)
	{
	case '+':
		printf("%.f+%.f=%.f\n", a, b, a + b);
		break;
	case '-':
		printf("%.f-%.f=%.f\n", a, b, a - b);
		break;
	case '*':
		printf("%.f*%.f=%.f\n", a, b, a*b);
		break;
	case '/':
		printf("%.f/%.f=%.f\n", a, b, a / b);
		break;
	default:
		printf("input error!!\n");
	}
	//system("pause");
	//return 0;
}