#include <stdio.h>
#include <stdlib.h>
int squAdd_1(int, int);
void printstar_2();
int ex3_2_1()
{
	float num1, num2, num3, sum;

	printf("�п�J�@�ӯB�I��: ");
	scanf("%f", &num1);
	printf("�п�J�t�@�ӯB�I��: ");
	scanf("%f", &num2);
	printf("�п�J�t�@�ӯB�I��:  ");
	scanf("%f", &num3);
	/*�ǻ�����ܼ�num1�Bnum2��squAdd( )���*/
	/* �ϥ��ܼơ@sum�@������ƶǦ^�� */
	sum = squAdd_1(num1, num2, num3);
	printstar_2();
	printf("%1f ���ߤ�[ %1f ���ߤ�[ %1f ���ߤ謰 %1f\n", num1, num2, num3, sum);
	printstar_2();
	//system("PAUSE");
	//return 0;
}
/* �w�qsquAdd( )�A
��ƫ��A��int�A�ѼƬ�a�Bb */
/* �p��a�Bb������M��^�� */
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