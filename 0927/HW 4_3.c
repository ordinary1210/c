#include <stdio.h>
#include <stdlib.h>
int MAX();
int MIN();
int a, b, c;
int HW4_3(void)
{
	printf("�п�J�T�Ӿ��\n");

	printf("�Ĥ@�Ӿ��:");
	scanf("%d", &a);
	printf("�ĤG�Ӿ��:");
	scanf("%d", &b);
	printf("�ĤT�Ӿ��:");
	scanf("%d", &c);

	MAX();
	MIN();
}
int MAX()
{
	if (a>b)
		if (a>c)
			printf("�̤j��=%d\n", a);
		else
			printf("�̤j��=%d\n", c);
	else
		if (b>c)
			printf("�̤j��=%d\n", b);
		else
			printf("�̤j��=%d\n", c);
}
int MIN()
{
	if (a<b)
		if (a<c)
			printf("�̤p��=%d\n", a);
		else
			printf("�̤p��=%d\n", c);
	else
		if (b<c)
			printf("�̤p��=%d\n", b);
		else
			printf("�̤p��=%d\n", c);
}