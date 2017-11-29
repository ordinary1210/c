#include <stdio.h>
#include <stdlib.h>
int squAdd_1(int, int);
void printstar_2();
int ex3_2_1()
{
	float num1, num2, num3, sum;

	printf("請輸入一個浮點數: ");
	scanf("%f", &num1);
	printf("請輸入另一個浮點數: ");
	scanf("%f", &num2);
	printf("請輸入另一個浮點數:  ");
	scanf("%f", &num3);
	/*傳遞兩個變數num1、num2到squAdd( )函數*/
	/* 使用變數　sum　接收函數傳回值 */
	sum = squAdd_1(num1, num2, num3);
	printstar_2();
	printf("%1f 的立方加 %1f 的立方加 %1f 的立方為 %1f\n", num1, num2, num3, sum);
	printstar_2();
	//system("PAUSE");
	//return 0;
}
/* 定義squAdd( )，
函數型態為int，參數為a、b */
/* 計算a、b的平方和後回傳 */
int squAdd_1(int a, int b,int c)
{
	int ans;
	ans = a * a * a + b * b * b + c * c * c;
	return ans;
}
void printstar_2()
{
	int i;
	for (i = 1; i <= 30; i++)
		printf("*");
	printf("\n");
}