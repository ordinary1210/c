#include <stdio.h>
#include <stdlib.h>
void output_1();/* ��ƭ쫬�ŧi */
void dash();


void ex1_1()
{
	printf("�I�soutput���!!\n");
	dash();
	output_1(); /* �I�soutput( )��� */
	dash();
	printf("�I�s�����Aover!!\n");
	//system("PAUSE");
	//return 0;
}
/* output( )��ƪ��w�q */
void output_1()
{
	printf("�ڳ��wiPhone 6s\n");
	printf("�]���wApple watch\n");
}
void dash()
{
	int i;
	for (i = 0; i < 50; i++)
		printf("-");
	    printf("\n");
}
