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
		printf("1.  利用巢狀迴圈依序輸入二維陣列的元素\n");
		printf("2.  3天考試的分數 總分 平均值\n");
		printf("3.  列出分數\n");
		printf("4.  列出分數\n"); 
		printf("5.  除錯\n");
		printf("6.  定一有 10 列, 2 行的二維陣列, 一列代表一個人, 而行則分別記錄編號與身高\n");
		printf("7.  三維陣列 找出最大值最小值\n");
		printf("8.  氣泡排序法\n");
		printf("9.  二分收尋法\n");
		printf("10. 二分收尋法(練習)\n");




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
			ex3();
			break;
		case 4:
			ex3_1();
			break;
		case 5:
			ex4();
			break;
		case 6:
			ex5();
			break;
		case 7:
			//ex6();
			break;
		case 8:
			ex7();
			break;
		case 9:
			ex8();
			break;
		case 10:
			ex8_1();
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
