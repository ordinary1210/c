#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex3_1();
void ex3_2();
void ex3_3();
void ex3_4();



void main()
{
	int input;
	_Bool(flag) = 1;


	while (flag)
	{
		printf("0.  結束\n");
		printf("1.  遞增與遞減運算子\n");
		printf("2.  條件運算子\n");
		printf("3.  巢狀 if 敘述的練習\n");
		printf("4.  依據選擇值進行四則運算\n");
		printf("5.  將while用在迴圈執行次數為未知\n");
		printf("6.  以巢狀while迴圈改寫九九乘法表\n");
		printf("7.  利用巢狀迴圈印出三角形\n");
		printf("8.  將整數反印，例如 5123→3215\n");
		printf("---------------------------------------------作業------------------------------------------------\n");
		printf("9.  試利用巢狀迴圈撰寫出一個能產生如下圖結果的程式\n");
		printf("10. 請利用do while迴圈，計算 的總和，其中n為正的偶數，可由鍵盤自行輸入。若輸入的不是正偶數，則程式會要求使用者再次輸入，    直到輸入的數是正偶數為止\n");
		printf("11. 請由鍵盤輸入數值1~4，並加以判斷輸入值是否在1~4之間，如果超出此範圍，則印出輸入錯誤，否則利用switch印出相對應的季節      1：春天 2：夏天 3：秋天 4：冬天\n");
		printf("12. 試撰寫一程式，利用while迴圈印出5~20之間所有整數的平方值，最後再印出這些平方值的總和。\n");
		printf("13. 試利用while迴圈找出最小的n值，使得 的總和大於等於1000\n");
		printf("14. 試利用巢狀for迴圈印出九九乘法表\n");


		printf("-------------------------------------------------------------------------------------------------\n");
		printf("請輸入要執行的範例?");
		scanf("%d", &input);


		//ch3-1;
		switch (input)
		{
		case 1:
			ex3_1();
			break;
		case 2:
			ex3_2();
			break;
		case 3:
			ex3_3();
			break;
		case 4:
			ex3_4();
			break;
		case 5:
			ex3_5();
			break;
		case 6:
			ex3_6();
			break;
		case 7:
			ex3_7();
			break;
		case 8:
			ex3_8();
			break;
		case 9:
			HW3_1();
			break;
		case 10:
			HW3_2();
			break;
		case 11:
			HW3_3();
			break;
		case 12:
			HW3_4();
			break;
		case 13:
			HW3_5();
			break;
		case 14:
			HW3_6();
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