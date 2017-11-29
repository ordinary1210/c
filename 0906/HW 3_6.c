#include <stdio.h>
#include <stdlib.h>
int HW3_6(void)
{
	int A, B;
	printf(" 九九乘法表 \n");


	for (A = 1; A <= 9; A++)
	{
		for (B = 1; B <= 9; B++)

			printf("%d*%d=%2d ", B, A, A*B);
		printf("\n");

	}



	//system("pause");
	//return 0;
}