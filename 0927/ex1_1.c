#include <stdio.h>
#include <stdlib.h>
void output_1();/* ㄧ计 */
void dash();


void ex1_1()
{
	printf("㊣outputㄧ计!!\n");
	dash();
	output_1(); /* ㊣output( )ㄧ计 */
	dash();
	printf("㊣挡over!!\n");
	//system("PAUSE");
	//return 0;
}
/* output( )ㄧ计﹚竡 */
void output_1()
{
	printf("и尺舧iPhone 6s\n");
	printf("尺舧Apple watch\n");
}
void dash()
{
	int i;
	for (i = 0; i < 50; i++)
		printf("-");
	    printf("\n");
}
