#include <stdio.h>
#include <stdlib.h>
int HW3_1(void)
{
	int a, b, c = 5;
	for (a = 1; a <= c; a++)
	{
		for (b = 1; b <= a; b++)
			printf("%d", b);
		printf("\n");
	}
	//system("pause");
	//return 0;
}