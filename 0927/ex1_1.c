#include <stdio.h>
#include <stdlib.h>
void output_1();/* 函數原型宣告 */
void dash();


void ex1_1()
{
	printf("呼叫output函數!!\n");
	dash();
	output_1(); /* 呼叫output( )函數 */
	dash();
	printf("呼叫結束，over!!\n");
	//system("PAUSE");
	//return 0;
}
/* output( )函數的定義 */
void output_1()
{
	printf("我喜歡iPhone 6s\n");
	printf("也喜歡Apple watch\n");
}
void dash()
{
	int i;
	for (i = 0; i < 50; i++)
		printf("-");
	    printf("\n");
}
