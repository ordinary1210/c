#include <stdio.h>
#include <stdlib.h>
int ex3_3(void)
{
	int score;
	printf("��J�Ҹդ���:");
	scanf("%d", &score);
	if (score<60) /* �p�Gscore<60 */
	{
		if (score >= 50) /* �p�Gscore>=50 */
			printf("�[�o�I �֤ή�� \n");
		else
			printf("�o��\n");
	}
	else
		printf("�ή��g�g�g\n");

	//system("pause");
	//return 0;
}