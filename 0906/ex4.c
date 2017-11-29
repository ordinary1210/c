#include <stdio.h>
#include <stdlib.h>
int ex3_4(void)
{
	float a, b;
	char oper;
	printf("大數學家\n");
	printf("輸入第一數:");
	scanf("%f", &a);
	printf("輸入第二數:");
	scanf("%f", &b);
	printf("輸入運算符號 +,-,*,/ :");
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