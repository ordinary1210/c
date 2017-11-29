#include <stdio.h>
#include <stdlib.h>
int ex7()
{
	struct student
	{
		int id;
		char name[10];
		double score;
	};

	struct student classes[5] =
	{ { 10811," John",88.0 },
	  { 10812," Mary",82.0 },
	  { 10813," Bob",76.5 },
	  { 10814," Daniel",80.0 },
	  { 10815," Leo",68.0 } };

	int i;
	printf(" 學生名單如下\n");
	printf(" ----------------\n\n");
	printf("學號   姓名       分數\n");


	for (i = 0; i < 5; i++)
		printf("%d %-10s %5.1f\n",
			classes[i].id,
			classes[i].name,
			classes[i].score);
}