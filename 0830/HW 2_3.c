#include <stdio.h>
#include <stdlib.h>
int HW2_3(void)
{
	int i;
	printf("���ѷū� :");
	scanf("%d", &i);
	if (20 <= i&&i <= 22)
		printf(" �Х[�@�����~�M!\n");
	if (14 <= i&&i <= 19)
		printf(" �Ѯ�N, �Ь�W�~�M!\n");
	if (i>22)
		printf("�Ѯ𤣿���\n");
	if (i<14)
		printf("�Ѯ�N �ݦb�a�a\n");

	//system("pause");
	//return 0;
}