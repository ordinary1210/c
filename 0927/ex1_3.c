#include <stdio.h>
#include <stdlib.h>

double Area();

void ex1_3()
{
	double area;
	area = Area();
	printf("����Ϊ����n�� %f\n", area);
	//system("PAUSE");
	//return 0;
}

double Area()
{
	float a,b;
	printf("�п�J����Ϊ���:");
	scanf("%f", &a);
	printf("�п�J����Ϊ��e:");
	scanf("%f", &b);
	return(a*b);
}