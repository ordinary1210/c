#include <stdio.h>
#include <stdlib.h>

int ex6(void)
{
	int num[2][3], i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("請輸入num[%d][%d]的資料:", i, j);
			scanf("%d", &num[i][j]);
		}
	}
	printf("\n二維陣列資料如下:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%3d", num[i][j]);
		}
		printf("\n");
		//system("PAUSE");
		//return 0;
	}
}	