#include <stdio.h>
#include <stdlib.h>
int ex3_6(void) {
	int i = 1, j = 1;
	while (i <= 9)
	{
		while (j <= 9)
		{
			printf("%d*%d=%2d ", i, j, i*j);
			j++;
		}
		printf("\n");
		i++;
		j = 1;
	}
	//system("pause");
	//return 0;
}