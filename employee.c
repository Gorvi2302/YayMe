#include<stdio.h>

struct empdetails{
	char name[40];
	int empNo;
	char deptname[40];
	int salary;
};

int main(){
	struct empdetails emp;
	
	printf("\nEnter details: \n");
	printf("Employee Name: ");
	gets(emp.name);
	printf("Employee Number: ");
	scanf("%d",&emp.empNo);
	printf("Department Name: ");
	gets(emp.deptname);
	printf("Salary: ");
	scanf("%d",&emp.salary);
	
	printf("Entered details are as follows: ");
	printf("Employee Name: %s",emp.name);
	printf("Employee Number: %d",emp.empNo);
	printf("Department Name: %s",emp.deptname);
	printf("Salary: %d",emp.salary);
	return 0;
}
