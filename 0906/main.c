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
		printf("0.  ����\n");
		printf("1.  ���W�P����B��l\n");
		printf("2.  ����B��l\n");
		printf("3.  �_�� if �ԭz���m��\n");
		printf("4.  �̾ڿ�ܭȶi��|�h�B��\n");
		printf("5.  �Nwhile�Φb�j����榸�Ƭ�����\n");
		printf("6.  �H�_��while�j���g�E�E���k��\n");
		printf("7.  �Q�α_���j��L�X�T����\n");
		printf("8.  �N��ƤϦL�A�Ҧp 5123��3215\n");
		printf("---------------------------------------------�@�~------------------------------------------------\n");
		printf("9.  �էQ�α_���j�鼶�g�X�@�ӯಣ�ͦp�U�ϵ��G���{��\n");
		printf("10. �ЧQ��do while�j��A�p�� ���`�M�A�䤤n���������ơA�i����L�ۦ��J�C�Y��J�����O�����ơA�h�{���|�n�D�ϥΪ̦A����J�A    �����J���ƬO�����Ƭ���\n");
		printf("11. �Х���L��J�ƭ�1~4�A�å[�H�P�_��J�ȬO�_�b1~4�����A�p�G�W�X���d��A�h�L�X��J���~�A�_�h�Q��switch�L�X�۹������u�`      1�G�K�� 2�G�L�� 3�G��� 4�G�V��\n");
		printf("12. �ռ��g�@�{���A�Q��while�j��L�X5~20�����Ҧ���ƪ�����ȡA�̫�A�L�X�o�ǥ���Ȫ��`�M�C\n");
		printf("13. �էQ��while�j���X�̤p��n�ȡA�ϱo ���`�M�j�󵥩�1000\n");
		printf("14. �էQ�α_��for�j��L�X�E�E���k��\n");


		printf("-------------------------------------------------------------------------------------------------\n");
		printf("�п�J�n���檺�d��?");
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