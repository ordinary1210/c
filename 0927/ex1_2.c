#include <stdio.h>
#include <stdlib.h>

void calculate();


void ex1_2()
{
	calculate();
	
}

void calculate()
{
	int num;
	printf("請輸入分數:");
	scanf("%d", &num);
	if (num >= 60)
		printf("pass\n");
	else
		printf("down\n");
}

