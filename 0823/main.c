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
		printf("0. 結束\n");
		printf("1. Hello\n");
		printf("2. 程式區塊與本體的範圍\n");
		printf("3. 溢位：當儲存的數值超出容許範圍時\n");
		printf("4. 由鍵盤輸入一個整數的範例\n");
		printf("-----------------------------------作業--------------------------------------\n");
		printf("5. 請列印出 'Hello Every One, Welcome to the C World!\n");
		printf("6. 設x1=a, x2=b, x3=n請用x1, x2, x3列印出banana\n");
		printf("7. 請運用for迴圈, 計算1+3+5+…+99\n");
		printf("8. 請運用for迴圈, 計算1^2+2^2+3^2+…+10^2\n");
		

		printf("-----------------------------------------------------------------------------\n");
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
			HW1_1();
			break;
		case 6:
			HW1_2();
			break;
		case 7:
			HW1_3();
			break;
		case 8:
			HW1_4();
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