#include<stdio.h>

float calculateWeeklySalary(int grade, float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);

int main()
{
	int num;
	float hours,calweekly_sal;
	
	printf("input the grade : ");
	scanf("%d",&num);
	printf("input total no of hours worked : ");
	scanf("%f",&hours);
	
	calweekly_sal=calculateWeeklySalary(num,hours);
	
	printDetails(num,hours,calweekly_sal);
	
	return 0;
}

float calculateWeeklySalary(int grade, float hrsWorked)
{
	float Weekly_salary;
	
	if(grade==1)
	{
		Weekly_salary=hrsWorked*100.00;
	}
	if(grade==2)
	{
		Weekly_salary=hrsWorked*200.00;
	}
	if(grade==3)
	{
		Weekly_salary=hrsWorked*300.00;
	}
	return Weekly_salary;
}
void printDetails(int grade, float hrsWorked, float salary)
{
	printf("\nYour Grade is : %d\n",grade);
	printf("Your worked Hours : %.1f\n",hrsWorked);
	printf("Your Salary is : %.2f",salary);
}
