#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex1();
void ex2_1();
void ex2_2();
void ex2_3();



void main()

{
	int input;
	_Bool(flag) = 1;


	while (flag)
	{
		printf("0.  結束\n");
		printf("1.  do while迴圈\n");
		printf("2.  陣列範例\n");
		printf("3.  陣列元素輸入\n");
		printf("4.  陣列每一元素位址\n");
		printf("5.  一維陣列始值設定\n");
		printf("6.  陣列的應用－最大與最小值\n");
		printf("7.  陣列界線的檢查\n");
		printf("8.  二維陣列\n");
		printf("9.  二維陣列的應用\n");
		


		printf("-----------------------------------\n");
		printf("請輸入要執行的範例?");
		scanf("%d", &input);


		
		switch (input)
		{
		case 1:
			ex1();
			break;
		case 2:
			ex2();
			break;
		case 3:
			ex2_1();
			break;
		case 4:
			ex2_2();
			break;
		case 5:
			ex2_3();
			break;
		case 6:
			ex3();
			break;
		case 7:
			ex4();
			break;
		case 8:
			ex5();
			break;
		case 9:
			ex6();
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

