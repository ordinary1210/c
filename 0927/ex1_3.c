#include <stdio.h>
#include <stdlib.h>

double Area();

void ex1_3()
{
	double area;
	area = Area();
	printf("長方形的面積為 %f\n", area);
	//system("PAUSE");
	//return 0;
}

double Area()
{
	float a,b;
	printf("請輸入長方形的長:");
	scanf("%f", &a);
	printf("請輸入長方形的寬:");
	scanf("%f", &b);
	return(a*b);
}