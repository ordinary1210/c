#include <stdio.h>
#include <stdlib.h>
int ex6()
{
	double d;
	double *p = &d;
	double **pp = &p;


	printf("�п�J�@double ��: ");
	scanf("%lf", &d);
	printf("d=%.2lf, *p=%.2lf, **pp=%.2lf\n", d, *p, **pp);
	
	

    return 0;
}