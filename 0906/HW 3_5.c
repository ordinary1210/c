#include<stdio.h>
#include<stdlib.h>
void HW3_5() {
	int a = 1, sum = 0;
	while (sum <= 1000)
	{
		a++;
		sum += a;
	}

	printf("總和大於等於1000的最小n=%d\n", a);
}