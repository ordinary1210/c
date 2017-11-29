#include <stdio.h>
#include <stdlib.h>
int ex2_2(void)
{
	
	int num[10], i;
	for (i = 0; i < 10; i++)
	{
		printf("&num[%d]=%p, num+%d=%p\n", i, &num[i], i, num + i);
	}
	system("PAUSE");
	return 0;
}