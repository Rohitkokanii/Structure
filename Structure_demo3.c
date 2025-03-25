#include<stdio.h>

struct employee {
	int empid;
	char empName[30];
	char desig[30];
	int salary;
	char mobile[11];
};

int main() {

	struct employee e1;
	printf("\nEnter employee id\t");
	scanf_s("%d",&e1.empid);
	printf("\nEnter name of employee \t");
	scanf_s("%[^\n]s",e1.empName,30);
	printf("enter designation of employee \t");
	scanf_s("%[^\n]", &e1.salary);
	printf("\nEnter salary\n");
	scanf_s("%d",&e1.salary);
	printf("\n Enter mobile number \t");
	scanf_s("%s",e1.mobile,11);

	printf("\n\nEmployee Details\n\n");
	printf("\nname of employee => %s",e1.empName);
	printf("\nempid => %d\n",e1.empid);
	printf("\nDesignation =>%s \n",e1.desig);
	printf("\nsalary => %d\n",e1.salary);
	printf("\nMobile Number =>%s\n",e1.mobile);
	return 0;
}