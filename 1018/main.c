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
		printf("1.  陣列名稱的值即陣列的位址\n");
		printf("2.  指標的算數運算\n");
		printf("3.  雙重指標型態的定義\n");
		printf("4.  三重指標型態的定義\n");
		printf("5.  指標變數除錯練習 1 \n");
		printf("6.  指標變數除錯練習 2 \n");
		printf("7.  雙重指標型態的定義(練習)\n");
		printf("8.  指標陣列與二維陣列 1\n");
		printf("9.  指標陣列與二維陣列 2\n");
		printf("-------------作業----------------\n");
		printf("10. 測驗\n");
	    printf("----------------------------------\n");
		printf("請輸入要執行的範例?");
		scanf("%d", &input);


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
		case 10:
			ex10();
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