#include <stdio.h>
#include <stdlib.h>
#include "c.h"


void ex1();
void ex2();
void ex3();
void ex4();
void HW1_1();
void HW1_2();
void HW1_3();
void HW1_4();

void main()
{
	int input;
	_Bool(flag) = 1;


	while (flag)
	{
		printf("0.  結束\n");
		printf("1.  字元輸出入範例 scanf() 1\n");
		printf("2.  解決連續使用 scanf() 輸入的問題\n");
		printf("3.  getche(),getch(),getcha(),putchar的使用\n");
		printf("4.  字元輸出入 4\n");
		printf("5.  \n");
		printf("6.  \n");
		printf("7.  \n");
		printf("8.  \n");
		printf("9.  \n");
		printf("10  \n");

		printf("-----------------------------------\n");
		printf("請輸入要執行的範例?");
		scanf("%d", &input);
		
		
		while (getchar() != '\n');


		//ch3-1;
		switch (input)
		{
		case 1:
			ex1();
			break;
		case 2:
			ex2();
			break;
		case 3:
			ex3();
			break;
		case 4:
			ex4();
			break;
		case 5:
			ex5();
			break;
		case 6:
			ex6();
			break;
		case 7:
			ex7();
			break;
		case 8:
			ex8();
			break;
		case 9:
			ex9();
			break;




		case 0:
			flag = 0;
			break;

		default:
			break;
		}

		system("pause");
		system("cls");
	}

}