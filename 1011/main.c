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
		printf("0.  ����\n");
		printf("1.  #define�m��\n");
		printf("2.  �����ܼƪ��ϥνd��\n");
		printf("3.  �����ܼƩҦ����줸��\n");
		printf("4.  ���оާ@���m��\n");
		printf("5.  ����Ы��V���~�����A��\n");
		printf("6.  �ǻ����Ш���\n");
		printf("7.  �ܼƭȪ�����\n");
		printf("8.  �ܼƭȪ����� 2\n");
		printf("9.  �Ǧ^�h�ӼƭȪ����\n");
		printf("10. �}�C�W�٪��ȧY�}�C����}\n");
		printf("11. ���Ъ���ƹB��\n");
	

		printf("-----------------------------------\n");
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
			ex5();
			break;
		case 6:
			ex6();
			break;
		case 7:
			ex7();
			break;
		case 8:
			ex7_1();
			break;
		case 9:
			ex8();
			break;
		case 10:
			ex9();
			break;
		case 11:
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