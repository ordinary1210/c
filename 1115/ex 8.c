#include <stdio.h>
#include <stdlib.h>
int ex8()
{
	char c = 'a';
	printf("輸入一個大寫字母:");
	scanf("%c", &c);

	if ((c >= 65) && (c <= 90))
		printf("輸入 %c 的小寫字母是 %c\n",c, c+32);
	else if ((c >= 48) && (c <= 57))
		printf("輸入是個數字\n");
	else if ((c >= 97) && (c <= 122))
		printf("輸入是個小寫字母\n");
	else
		printf("輸入不是字母也不是數字\n");


}