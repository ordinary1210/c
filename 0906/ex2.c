#include <stdio.h>
#include <stdlib.h>
int ex3_2(void)
{
	int num1, num2, larger;
	printf("�j�a��@�� ��J���\n");

	printf("�Ĥ@�ӼƦr:");
	scanf("%d", &num1);

	printf("�ĤG�ӼƦr:");
	scanf("%d", &num2);
	num1>num2 ? (larger = num1) : (larger = num2); /* ����B��l */
	printf("%d ����j \n", larger);


	//system("pause");
	//return 0;
}