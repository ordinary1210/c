#include <stdio.h>
#include <stdlib.h>
int HW2_5(void)
{
	int A, B, money;
	printf("�ï]���� 45��\n");
	printf("�Q�s���K 55��\n");
	printf("�n�ܤ���?\n");
	printf("�ï]����:");
	scanf("%d", &A);
	printf("�Q�s���K:");
	scanf("%d", &B);

	money = A * 45 + B * 55;

	if (A + B > 12 && money > 700 || A >= 10)
		money = money*0.95;

	printf("�`�@=%d\n", money);




	//system("pause");
	//return 0;
}