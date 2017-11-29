#include <stdio.h>
#include <stdlib.h>
int ex3_3(void)
{
	int score;
	printf("輸入考試分數:");
	scanf("%d", &score);
	if (score<60) /* 如果score<60 */
	{
		if (score >= 50) /* 如果score>=50 */
			printf("加油點 快及格嘍 \n");
		else
			printf("廢物\n");
	}
	else
		printf("及格讚讚讚\n");

	//system("pause");
	//return 0;
}