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
		printf("1.  �Q�α_���j��̧ǿ�J�G���}�C������\n");
		printf("2.  3�ѦҸժ����� �`�� ������\n");
		printf("3.  �C�X����\n");
		printf("4.  �C�X����\n"); 
		printf("5.  ����\n");
		printf("6.  �w�@�� 10 �C, 2 �檺�G���}�C, �@�C�N��@�ӤH, �Ӧ�h���O�O���s���P����\n");
		printf("7.  �T���}�C ��X�̤j�ȳ̤p��\n");
		printf("8.  ��w�ƧǪk\n");
		printf("9.  �G�����M�k\n");
		printf("10. �G�����M�k(�m��)\n");




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
