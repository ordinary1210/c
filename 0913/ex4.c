#include <stdio.h>
#include <stdlib.h>
#define MAX 5 
int ex4(void)
{
	int score[MAX]; 
	int i = 0, num;
	float sum = 0.0f;
	printf("Please input the score, input 0 to end:\n");
	do
	{
		if (i == MAX) 
		{
			printf("Array space has been used up!!\n");
			i++; 
			break;
		}
		printf("輸入分數:");
		scanf("%d", &score[i]);
	} while (score[i++]>0); 
	num = i - 1;
	for (i = 0; i<num; i++)
		sum += score[i]; 
	printf("平均分數為 %.2f\n", sum / num);
	//system("pause");
	//return 0;
}