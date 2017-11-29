#include <stdio.h>
#include <stdlib.h>
int HW2_6_1(void)
{
	int A, B, C;
	printf("¿é¤J¼Æ¦r :");
	scanf("%d", &A);

	for (B = 1; B <= A; B++)
	{
		for (C = 1; C <= B; C++)
			printf("*");
		printf("\n");

	}


	//system("pause");
	//return 0;
}