#include <stdio.h>
#include <stdlib.h>
int acc();
int count;

int HW4_5()
{

	printf("��J0�����},��J1�ɥ[1\n");

	do
	{
		scanf("%d", &count);
		if (count == 1)
			acc();
		else
		{
			printf("�����{��");
			system("exit");
		}

	} while (count == 1);
	return 0;
}
int acc()
{
	static int si = 1;
	printf("�ثe�����s���H��= %d\n", si++);
	return 0;
}
