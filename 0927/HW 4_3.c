#include <stdio.h>
#include <stdlib.h>
int MAX();
int MIN();
int a, b, c;
int HW4_3(void)
{
	printf("叫块俱计\n");

	printf("材俱计:");
	scanf("%d", &a);
	printf("材俱计:");
	scanf("%d", &b);
	printf("材俱计:");
	scanf("%d", &c);

	MAX();
	MIN();
}
int MAX()
{
	if (a>b)
		if (a>c)
			printf("程=%d\n", a);
		else
			printf("程=%d\n", c);
	else
		if (b>c)
			printf("程=%d\n", b);
		else
			printf("程=%d\n", c);
}
int MIN()
{
	if (a<b)
		if (a<c)
			printf("程=%d\n", a);
		else
			printf("程=%d\n", c);
	else
		if (b<c)
			printf("程=%d\n", b);
		else
			printf("程=%d\n", c);
}