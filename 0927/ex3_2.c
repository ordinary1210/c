#include <stdio.h>
#include <stdlib.h>
int squAdd(int, int);
void printstar_1();
int ex3_2()
{
	int num1, num2, sum;
	
    printf("請輸入一個整數: ");
	scanf("%d", &num1);
	printf("請輸入另一個整數: ");
	scanf("%d" , &num2);
	/*傳遞兩個變數num1、num2到squAdd( )函數*/
	/* 使用變數　sum　接收函數傳回值 */
	sum = squAdd(num1, num2);
	printstar_1();
	printf("%d 的平方加　%d 的平方為 %d\n",	num1, num2, sum);
	printstar_1();
	//system("PAUSE");
	//return 0;
}
/* 定義squAdd( )，
函數型態為int，參數為a、b */
/* 計算a、b的平方和後回傳 */
int squAdd(int a, int b)
{
	int ans;
	ans = a * a + b * b;
	return ans;
}
void printstar_1()
{
	int i;
	for (i = 1; i <= 30; i++)
		printf("*");
	printf("\n");
}
