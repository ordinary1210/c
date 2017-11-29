#include <stdio.h>
#include <stdlib.h>
int ex3_2(void)
{
	int num1, num2, larger;
	printf("大家比一比 輸入兩數\n");

	printf("第一個數字:");
	scanf("%d", &num1);

	printf("第二個數字:");
	scanf("%d", &num2);
	num1>num2 ? (larger = num1) : (larger = num2); /* 條件運算子 */
	printf("%d 比較大 \n", larger);


	//system("pause");
	//return 0;
}