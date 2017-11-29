#include <stdio.h>
#include <stdlib.h>
int HW3_3(void)
{

	int input;
	printf("哈囉 請輸入1~4 :");
	scanf(" %d", &input);
	switch (input)
	{
	case 1:
		printf("春天 開花瞜\n");
		break;
	case 2:
		printf("夏天 去海邊玩水瞜\n");
		break;
	case 3:
		printf("秋天 中秋節考肉瞜\n");
		break;
	case 4:
		printf("冬天 泡溫泉瞜\n");
		break;
	default:

		printf("輸入錯誤!!\n");
	}
	//system("pause");
	//return 0;
}