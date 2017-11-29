#include <stdio.h>
#include <stdlib.h>
int HW3_2(void) {
	int a, b = 2, sum = 0;
	do
	{
		printf("輸入一個偶數:");
		scanf("%d", &a);
	} while (a % 2 != 0);

	do
	{
		sum += b;
		b = b + 2;
	} while (b <= a);


	printf("2+4+...+%d=%d\n", a, sum);


	//system("pause");
	//return 0;
}