#include <stdio.h>
#include <stdlib.h>
int ex6()
{
	double d;
	double *p = &d;
	double **pp = &p;


	printf("請輸入一double 數: ");
	scanf("%lf", &d);
	printf("d=%.2lf, *p=%.2lf, **pp=%.2lf\n", d, *p, **pp);
	
	

    return 0;
}