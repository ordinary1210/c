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
		printf("0.  ����\n");
		printf("---------------------------------------------�@�~------------------------------------------------\n");
		printf("1.  �ռ��g�@�{���A�i����L��J�@�Ӿ�ơA�M��P�_���O�_�Ʃΰ���\n");
		printf("2.  �м��g�@�{���A�i����L��J���ūסA�{������X���ؤ�ūסA���ഫ�����p�U�G�ؤ�ū� = 1.8*���ū� + 32\n");
		printf("3.  �ռ��g�@�{���A�i����L��J��šA�Y�b20~22�פ����A��ܥX:�Х[�@�����~�M!�A�Y�b14~19�פ����A��ܥX:�Ѯ�N,�Ь�W�~�M!\n");
		printf("4.  �ï]�����P�Q�s���K���O��45�P55��, �Х��߰ݫȤH�U�ݭn�R�X�~, ��ï]�����P�Q�s���K�ʶR�`�ƶW�L15�~,                       �åB�`�B�F(�t) 800��, ����ɦ�9���u�f\n");
        printf("5.  �ï]�����P�Q�s���K���O��45�P55��, �Х��߰ݫȤH�U�ݭn�R�X�~, ��ï]�����P�Q�s���K�ʶR�`�ƶW�L12�~,                       �άO�`�B�F(�t) 700��, �άO�ï]�����ʶR�F(�t)10�~, ����ɦ�95���u�f\n");
		printf("6.  �Шϥ� For �j��L�X�P�� A\n");
		printf("7.  �Шϥ� For �j��L�X�P�� B\n");
		printf("8.  �Шϥ� For �j��L�X�P�� C\n");
		printf("9.  �Шϥ� For �j��L�X�P�� D\n");
		printf("10. �Шϥ� For �j��L�X�P�� E\n");


		printf("-------------------------------------------------------------------------------------------------\n");
		printf("�п�J�n���檺�d��?");
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