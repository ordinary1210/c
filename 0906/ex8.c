#include <stdio.h>
#include <stdlib.h>
int ex3_8(void)
{
	int a, r;
	while (1)
	{
		do
		{
			printf("輸入數字:");
			scanf("%d", &a);
		} while (a <= 0);
		printf("轉轉轉: ");
		while (a != 0)
		{
			r = a % 10;
			a /= 10;
			printf("%d", r);
		}
		printf("\n\n");
	}
	//system("pause");
	//return 0;
}