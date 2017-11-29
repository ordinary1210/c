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
	printf("請輸入正方形的邊長:");
	scanf("%d", &squ.length);


	squ.area = squ.length*squ.length;
	printf("三角形的面積為:%.2f\n", squ.area);
}
