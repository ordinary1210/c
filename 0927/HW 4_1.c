#include<stdio.h>
#include<stdlib.h>

int gcd(int m, int n);
int m, n;
int HW4_1(void)
{
	printf("請輸入兩數\n");

	printf("第一個數:");
	scanf("%d", &m);
	printf("第二個數:");
	scanf("%d", &n);
	
	gcd(m, n);
	printf("Gcd：%d\n", gcd(m, n));
}

int gcd(int m, int n)
{

	if (n == 0)
	{
		return m;
	}
	else
	{
		int r = m % n;
		m = n;
		n = r;
		gcd(m, n);
	}
}