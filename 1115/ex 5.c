#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
int ex5()
{
	char ch;
	printf("�п�J�@�Ӧr��: ");
	ch = _getche();
	if (isalnum(ch))
		printf("\n%c �O�@�^��r���μƦr\n", ch);
	else
		printf("\n%c���O�@�^��r���μƦr\n", ch);
	//system("PAUSE");
	//return 0;
}
