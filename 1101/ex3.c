#include <stdio.h>
#include <stdlib.h>
int ex3()
{

	struct square
	{
		int length;
		double area;
	};

	struct square squ;
	printf("�п�J����Ϊ����:");
	scanf("%d", &squ.length);


	squ.area = squ.length*squ.length;
	printf("�T���Ϊ����n��:%.2f\n", squ.area);
}
