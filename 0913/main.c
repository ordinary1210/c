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
		printf("0.  ����\n");
		printf("1.  do while�j��\n");
		printf("2.  �}�C�d��\n");
		printf("3.  �}�C������J\n");
		printf("4.  �}�C�C�@������}\n");
		printf("5.  �@���}�C�l�ȳ]�w\n");
		printf("6.  �}�C�����Ρг̤j�P�̤p��\n");
		printf("7.  �}�C�ɽu���ˬd\n");
		printf("8.  �G���}�C\n");
		printf("9.  �G���}�C������\n");
		


		printf("-----------------------------------\n");
		printf("�п�J�n���檺�d��?");
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

