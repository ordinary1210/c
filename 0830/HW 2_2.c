#include <stdio.h>
#include <stdlib.h>
int HW2_2(void)
{
	int i;
	printf("輸入攝氏溫度: ");
	scanf("%d", &i);
	i = i*1.8 + 32;
	printf("華氏溫度=%d\n", i);
	//system("pause");
	//return 0;
}