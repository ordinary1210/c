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
	printf("0.  ����\n");
	printf("1.  �I�soutput���!!\n");
	printf("2.  �I�soutput���!!(�m�� 1)\n");
	printf("3.  �I�soutput���!!(�m�� 2)\n");
	printf("4.  �I�soutput���!!(�m�� 3)\n");
	printf("5.  �d��function-2a\n");
	printf("6.  �d��function-2b\n");
	printf("7.  �d��function-3a\n");
	printf("8.  �d��function-3b\n");
	printf("9.  �d��function-3c(���)\n");
	printf("10. �d��function-3c-1(�B�I��)\n");
	printf("-----------------------------------�@�~--------------------------------------\n");
	printf("11. �Q�λ��j��ƨD��ƪ� gcd(�̤j���]��) \n");
	printf("12. �Q�ΫD���j��ƨD��ƪ� gcd(�̤j���]��)\n");
	printf("13. �]�p�@�q�Ʀr�C��, ���w�q init ��� t ���o����, �A�w�q getans ���,���o�ϥΪ̿�J������,                                 �̫�A�w�q compare ���, ������׬O�_���T\n");
	printf("14. �ϩw�q�G�Ө��, �@���L�X�T�Ӿ�ƪ��̤j��, �G���L�X�T�Ӿ�ƪ��̤p�� \n");
	printf("15. �O��ƦC���W�h���Y�@�����Ȭ���e�G�����M, ���] F0=1, F1=1, �h�O��ƦC��:                                                1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...�եH���j��ư��椧.\n");
	printf("16. �O��ƦC���W�h���Y�@�����Ȭ���e�G�����M, ���] F0=1, F1=1, �h�O��ƦC��:                                                1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...�եH�D���j��ư��椧.\n");
	printf("17. �s���@������, �ҷ|���Ѩ�ثe��������Q�s�����H��, �եH static �x�s���O���Ƥ��]�p�@�p�ƾ�,                             �C��I�s�Ө��, �p�ƾ����ȳ��n�۰ʲ֥[, �̫��X�Ө�ƳQ�I�s������\n");
	




	printf("-----------------------------------------------------------------------------\n");
	printf("�п�J�n���檺�d��?");
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
