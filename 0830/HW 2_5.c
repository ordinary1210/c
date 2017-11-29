#include <stdio.h>
#include <stdlib.h>
int HW2_5(void)
{
	int A, B, money;
	printf("¬Ã¯]¥¤¯ù 45¤¸\n");
	printf("¯QÀs®³ÅK 55¤¸\n");
	printf("­n³Ü¤°»ò?\n");
	printf("¬Ã¯]¥¤¯ù:");
	scanf("%d", &A);
	printf("¯QÀs®³ÅK:");
	scanf("%d", &B);

	money = A * 45 + B * 55;

	if (A + B > 12 && money > 700 || A >= 10)
		money = money*0.95;

	printf("Á`¦@=%d\n", money);




	//system("pause");
	//return 0;
}