#include <stdio.h>
#include <stdlib.h>
int ex9()
{
	struct student
	{
		char name[20];
		int score;
	};
	struct student *ptr;
	ptr = (struct student *)malloc(sizeof(struct student));
	printf("�п�J�ǥͪ��m�W: ");
	scanf("%s",ptr->name);
	printf("�п�J�ǥͪ����Z: ");
	scanf("%d", &ptr->score);
	printf("\n�ǥͪ��m�W�O:%s\n", ptr->name);
	printf("���Z��:.3%d\n", ptr->score);

}