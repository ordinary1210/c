#include <stdio.h>
#include <stdlib.h>
void output(void);  /* ��ƭ쫬�ŧi */
int ex1()
{
	printf("�I�soutput���!!\n");
	output();     /* �I�soutput( )��� */
	printf("�I�s�����Aover!!\n");
	system("PAUSE");
	return 0;
}
/* output( )��ƪ��w�q */
void output(void)
{
	printf("�ڳ��wiPhone 6s\n");
	printf("�]���wApple watch\n");
}
