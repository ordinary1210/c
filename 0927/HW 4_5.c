#include <stdio.h>
#include <stdlib.h>
int acc();
int count;

int HW4_5()
{

	printf("輸入0時離開,輸入1時加1\n");

	do
	{
		scanf("%d", &count);
		if (count == 1)
			acc();
		else
		{
			printf("結束程式");
			system("exit");
		}

	} while (count == 1);
	return 0;
}
int acc()
{
	static int si = 1;
	printf("目前為止瀏覽人數= %d\n", si++);
	return 0;
}
