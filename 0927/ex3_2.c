#include <stdio.h>
#include <stdlib.h>
int squAdd(int, int);
void printstar_1();
int ex3_2()
{
	int num1, num2, sum;
	
    printf("�п�J�@�Ӿ��: ");
	scanf("%d", &num1);
	printf("�п�J�t�@�Ӿ��: ");
	scanf("%d" , &num2);
	/*�ǻ�����ܼ�num1�Bnum2��squAdd( )���*/
	/* �ϥ��ܼơ@sum�@������ƶǦ^�� */
	sum = squAdd(num1, num2);
	printstar_1();
	printf("%d ������[�@%d �����謰 %d\n",	num1, num2, sum);
	printstar_1();
	//system("PAUSE");
	//return 0;
}
/* �w�qsquAdd( )�A
��ƫ��A��int�A�ѼƬ�a�Bb */
/* �p��a�Bb������M��^�� */
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
