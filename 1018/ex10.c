#include<stdio.h>
#include<stdlib.h>


int ex10()
{
	char *str[13] = { "ab","cd","ef","gh","ij","kl","mn","op","qr","st","uv","wx","yz" };
	
	for (int i = 0; i <= 12; i++)
	{
		for (int n = 0; n < 2; n++)
			printf("­È %c ¦ì§}=%p \n", *(*(str + i) + n)), *(*(str + i) + n);
	}
		printf("\n");

}