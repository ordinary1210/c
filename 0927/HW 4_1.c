#include<stdio.h>
#include<stdlib.h>

int gcd(int m, int n);
int m, n;
int HW4_1(void)
{
	printf("�п�J���\n");

	printf("�Ĥ@�Ӽ�:");
	scanf("%d", &m);
	printf("�ĤG�Ӽ�:");
	scanf("%d", &n);
	
	gcd(m, n);
	printf("Gcd�G%d\n", gcd(m, n));
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