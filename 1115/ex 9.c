#include <stdio.h>
#include <stdlib.h>
int ex9()
{
	char c = 'a';
	printf("��J�@�Ӥp�g�r��:");
	scanf("%c", &c);

	if ((c >= 97) && (c <= 122))
		printf("��J %c ���j�g�r���O %c\n", c, c - 32);
	else if ((c >= 48) && (c <= 57))
		printf("��J�O�ӼƦr\n");
	else if ((c >= 65) && (c <= 90))
		printf("��J�O�Ӥj�g�r��\n");
	else 
		printf("��J���O�r���]���O�Ʀr\n");

}