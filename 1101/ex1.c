#include <stdio.h>
#include <stdlib.h>
int ex1()
{
	struct student
	{
		char name[20];
		int score;
    }
	rec1;
	struct student rec2;
	
	printf("rce1 ¸Ñºc¦û %d bytes\n", sizeof(rec1));
	printf("rce2 ¸Ñºc¦û %d bytes\n", sizeof(rec2));
}