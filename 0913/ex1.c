#include <stdio.h>
#include <stdlib.h>
int ex1(void) {
	int n, i = 1, sum = 0; 
	do
	{
		printf("��J�@�Ӥj��0����:");
		scanf("%d", &n);
	} while (n <= 0); 
	do
	{
		sum += i;
		i++;
	} while (i <= n); 
	printf("1+2+...+%d=%d\n", n, sum);
	//system("pause");
	//return 0;
}