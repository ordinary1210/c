#include <stdio.h>
#include <stdlib.h>
int init();
int getans();
int compare();
int t, ans;
int HW4_2(void)
{
	init();
	getans();
	compare();
}
int init()
{
	printf("�w��Ө�q�Ʀr�C��!!\n");
	printf("�����D�]�w���� t= ");
	scanf("%d", &t);
}
int getans()
{
	printf("�п�J�z�n�q���Ʀr: ");
	scanf("%d", &ans);
}
int compare()
{
	if (ans == t)
		printf("�m�m�m  ���߲q��!\n");
	else
		printf("�ܩ�p�q���F!\n");
}