#include <stdio.h>
#include <stdlib.h>
int ex1(void) {
	int n, i = 1, sum = 0; 
	do
	{
		printf("輸入一個大於0的數:");
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