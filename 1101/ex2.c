#include <stdio.h>
#include <stdlib.h>
int ex2()
{

	struct triangle
	{
		int length, height;
		double area;
	};

	struct triangle tri;
	printf("請輸入三角形的長:");
	scanf("%d", &tri.length);
	printf("請輸入三角形的高:");
	scanf("%d", &tri.height);

	tri.area = tri.length*tri.height / 2.0;
	printf("三角形的面積為:%.2f\n", tri.area);
}



