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
		printf("0. ����\n");
		printf("1. Hello\n");
		printf("2. �{���϶��P���骺�d��\n");
		printf("3. ����G���x�s���ƭȶW�X�e�\�d���\n");
		printf("4. ����L��J�@�Ӿ�ƪ��d��\n");
		printf("-----------------------------------�@�~--------------------------------------\n");
		printf("5. �ЦC�L�X 'Hello Every One, Welcome to the C World!\n");
		printf("6. �]x1=a, x2=b, x3=n�Х�x1, x2, x3�C�L�Xbanana\n");
		printf("7. �йB��for�j��, �p��1+3+5+�K+99\n");
		printf("8. �йB��for�j��, �p��1^2+2^2+3^2+�K+10^2\n");
		

		printf("-----------------------------------------------------------------------------\n");
		printf("�п�J�n���檺�d��?");
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