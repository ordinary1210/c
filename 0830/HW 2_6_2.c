#include <stdio.h>
#include <stdlib.h>
int HW2_6_2(void)
{
	int A, B, C;
	printf("��J�Ʀr :");
	scanf("%d", &A);

	for (B = 1; B <= A; B++)
	{
		for (C = A; C >= B; C--)
			printf("*");
		printf("\n");

	}


	//system("pause");
	//return 0;
}