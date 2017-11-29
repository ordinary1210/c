#include <stdio.h>
#include <stdlib.h>

int ex6()
{
	struct employee
	{
		char id[7];
		char name[20];
		int salary;
	};
	
	struct employee general = { "D62128","Daniel",39888 };
	struct employee*ptr = &general;

	printf("<< 使用->運算子取得各結構元素 >>\n");
	printf("ID number: %s\n", ptr->id);
	printf("Employee Name: %s\n", ptr->name);
	printf("Salary: %d\n\n", ptr->salary);


	printf("<< 使用(*).運算子取得各結構元素 >>\n");
	printf("ID number: %s\n", (*ptr).id);
	printf("Employee Name: %s\n", (*ptr).name);
	printf("Salary: %d\n", (*ptr).salary);
}

