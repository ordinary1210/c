#include <stdio.h>
#include <stdlib.h>
int ex8()
{
	char c = 'a';
	printf("��J�@�Ӥj�g�r��:");
	scanf("%c", &c);

	if ((c >= 65) && (c <= 90))
		printf("��J %c ���p�g�r���O %c\n",c, c+32);
	else if ((c >= 48) && (c <= 57))
		printf("��J�O�ӼƦr\n");
	else if ((c >= 97) && (c <= 122))
		printf("��J�O�Ӥp�g�r��\n");
	else
		printf("��J���O�r���]���O�Ʀr\n");


}