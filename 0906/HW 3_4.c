#include <stdio.h>
#include <stdlib.h>
int HW3_4(void) {
	int a = 5, b = 0;
	while (a <= 20)
	{
		b = b + a*a;
		printf("%d*%d=%2d\n", a, a, a*a);
		a++;
	}
	printf("平方值的總和=%d\n", b);

	//system("pause");
	//return 0;
}