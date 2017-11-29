#include <stdio.h>
#include <stdlib.h>
GCD(int b, int R);


void HW4_1_1(void)
{
	int num1, num2, a, b;
	printf("块ㄢ计\n");

	printf("材计:");
	scanf("%d", &num1);
	printf("材计:");
	scanf("%d", &num2);


	a = num1 % num2;
	b = num2;
	b = GCD(a, b);
	printf("ㄢ计程そ计:%d\n", b);
	return;
}
int GCD(int a, int b)
{
	int a1;
	if (a>0)
	{
		a1 = b;
		b = a;
		a = a1 % b;
		return GCD(a, b);
	}
	else
	{
		return b;
	}
}