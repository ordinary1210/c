#include <stdio.h>
#include <stdlib.h>
int ex9(void)
{
	int i, a[5] = { 32,16,35,65,52 };
	printf("a=%p\n", a); /* �L�X���б`��a���� */
	printf("&a=%p\n", &a); /* �L�X���б`��a����} */
	for (i = 0; i<5; i++)
		printf("&a[%d]=%p\n", i, &a[i]); /* �L�X�}�Ca�C�@�Ӥ�������} */
	//system("pause");
	//return 0;
}