#include <stdio.h>
#include <stdlib.h>
GCD(int b, int R);


void HW4_1_1(void)
{
	int num1, num2, a, b;
	printf("��J���\n");

	printf("�Ĥ@�Ӽ�:");
	scanf("%d", &num1);
	printf("�ĤG�Ӽ�:");
	scanf("%d", &num2);


	a = num1 % num2;
	b = num2;
	b = GCD(a, b);
	printf("��Ƴ̤j���]��:%d\n", b);
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