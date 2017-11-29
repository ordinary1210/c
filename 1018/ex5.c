#include <stdio.h>
int ex5()
{
	int a = 100;
	int *p = &a;
	int **pp = &p;

	printf("&a=%p, a=%d\n", &a, a);
	printf("a=%d, *p=%d, **pp=%d\n", a, *p, **pp);
	

	return 0;
}