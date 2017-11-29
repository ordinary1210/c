#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex1();
void ex1_1();
void ex1_2();
void ex2();



void main()

{
int input;
_Bool(flag) = 1;


while (flag)
{
	printf("0.  挡\n");
	printf("1.  ㊣outputㄧ计!!\n");
	printf("2.  ㊣outputㄧ计!!(絤策 1)\n");
	printf("3.  ㊣outputㄧ计!!(絤策 2)\n");
	printf("4.  ㊣outputㄧ计!!(絤策 3)\n");
	printf("5.  絛ㄒfunction-2a\n");
	printf("6.  絛ㄒfunction-2b\n");
	printf("7.  絛ㄒfunction-3a\n");
	printf("8.  絛ㄒfunction-3b\n");
	printf("9.  絛ㄒfunction-3c(俱计)\n");
	printf("10. 絛ㄒfunction-3c-1(疊翴计)\n");
	printf("-----------------------------------穨--------------------------------------\n");
	printf("11. ノ患癹ㄧ计―ㄢ计 gcd(程そ计) \n");
	printf("12. ノ獶患癹ㄧ计―ㄢ计 gcd(程そ计)\n");
	printf("13. 砞璸瞦计笴栏, ﹚竡 init ㄧ计 t 眔氮, ﹚竡 getans ㄧ计,眔ㄏノ块氮,                                 程﹚竡 compare ㄧ计, ゑ耕氮琌タ絋\n");
	printf("14. ㄏ﹚竡ㄧ计, 俱计程, 俱计程 \n");
	printf("15. 禣ん计砏玥琘兜ㄤ玡兜㎝, 安砞 F0=1, F1=1, 玥禣ん计:                                                1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...刚患癹ㄧ计磅︽ぇ.\n");
	printf("16. 禣ん计砏玥琘兜ㄤ玡兜㎝, 安砞 F0=1, F1=1, 玥禣ん计:                                                1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...刚獶患癹ㄧ计磅︽ぇ.\n");
	printf("17. 聅凝呼, 穦矗ㄑヘ玡ゎ呼砆聅凝计, 刚 static 纗摸ㄧ计い砞璸璸计竟,                             –讽㊣赣ㄧ计, 璸计竟常璶笆仓, 程块赣ㄧ计砆㊣Ω计\n");
	




	printf("-----------------------------------------------------------------------------\n");
	printf("叫块璶磅︽絛ㄒ?");
	scanf("%d", &input);



	switch (input)
	{
	case 1:
		ex1();
		break;
	case 2:
		ex1_1();
		break;
	case 3:
		ex1_2();
		break;
	case 4:
		ex1_3();
		break;
	case 5:
		ex2();
		break;
	case 6:
		ex2_1();
		break;
	case 7:
		ex3();
		break;
	case 8:
		ex3_1();
		break;
	case 9:
		ex3_2();
		break;
	case 10:
		ex3_2_1();
		break;
	case 11:
	   HW4_1();
		break;
	case 12:
		HW4_1_1();
		break;
	case 13:
		HW4_2();
		break;
	case 14:
		HW4_3();
		break;
	case 15:
		HW4_4();
		break;
	case 16:
		HW4_4_1();
		break;
	case 17:
		HW4_5();
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
