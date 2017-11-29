#include <stdio.h>
#include <stdlib.h>
#include "c.h"


void HW2_1();
void HW2_2();
void HW2_3();
void HW2_4();
void HW2_5();
void HW2_6_1();
void HW2_6_2();
void HW2_6_3();
void HW2_6_4();
void HW2_6_5();

void main()
{
	int input;
	_Bool(flag) = 1;


	while (flag)
	{
		printf("0.  結束\n");
		printf("---------------------------------------------作業------------------------------------------------\n");
		printf("1.  試撰寫一程式，可由鍵盤輸入一個整數，然後判斷它是奇數或偶數\n");
		printf("2.  請撰寫一程式，可由鍵盤輸入攝氏溫度，程式的輸出為華氏溫度，其轉換公式如下：華氏溫度 = 1.8*攝氏溫度 + 32\n");
		printf("3.  試撰寫一程式，可由鍵盤輸入氣溫，若在20~22度之間，顯示出:請加一件薄外套!，若在14~19度之間，顯示出:天氣冷,請穿上外套!\n");
		printf("4.  珍珠奶茶與烏龍拿鐵分別為45與55元, 請先詢問客人各需要買幾瓶, 當珍珠奶茶與烏龍拿鐵購買總數超過15瓶,                       並且總額達(含) 800元, 售價享有9折優惠\n");
        printf("5.  珍珠奶茶與烏龍拿鐵分別為45與55元, 請先詢問客人各需要買幾瓶, 當珍珠奶茶與烏龍拿鐵購買總數超過12瓶,                       或是總額達(含) 700元, 或是珍珠奶茶購買達(含)10瓶, 售價享有95折優惠\n");
		printf("6.  請使用 For 迴圈印出星號 A\n");
		printf("7.  請使用 For 迴圈印出星號 B\n");
		printf("8.  請使用 For 迴圈印出星號 C\n");
		printf("9.  請使用 For 迴圈印出星號 D\n");
		printf("10. 請使用 For 迴圈印出星號 E\n");


		printf("-------------------------------------------------------------------------------------------------\n");
		printf("請輸入要執行的範例?");
		scanf("%d", &input);


		//ch3-1;
		switch (input)
		{
		case 1:
			HW2_1();
			break;
		case 2:
			HW2_2();
			break;
		case 3:
			HW2_3();
			break;
		case 4:
			HW2_4();
			break;
		case 5:
			HW2_5();
			break;
		case 6:
			HW2_6_1();
			break;
		case 7:
			HW2_6_2();
			break;
		case 8:
			HW2_6_3();
			break;
		case 9:
			HW2_6_4();
			break;
		case 10:
			HW2_6_5();
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