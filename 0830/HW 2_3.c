#include <stdio.h>
#include <stdlib.h>
int HW2_3(void)
{
	int i;
	printf("今天溫度 :");
	scanf("%d", &i);
	if (20 <= i&&i <= 22)
		printf(" 請加一件薄外套!\n");
	if (14 <= i&&i <= 19)
		printf(" 天氣冷, 請穿上外套!\n");
	if (i>22)
		printf("天氣不錯呦\n");
	if (i<14)
		printf("天氣冷 待在家吧\n");

	//system("pause");
	//return 0;
}