#include <stdio.h>
#include <stdlib.h>
void printstar(int);  /* printfstar()���쫬�ŧi */
int ex3_1()
{
	int num;
	printf("�A�n�h�֬P�P: ");
	scanf("%d", &num);
	printstar(num);
	system("PAUSE");
	return 0;
}
void printstar(int n)
{
	int i;
	for (i = 1; i<n; i++)
		printf("*");
	printf("\n");
}
