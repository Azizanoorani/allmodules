#include<stdio.h>
main()
{
	int msalary,loan,insurance,remaingsalary;
	printf("Enter Person Monthly Salary : ");
	scanf("%d",&msalary);
	loan= msalary/10;
	printf("\nYour loan installment is :  %d",loan);
	insurance=msalary/10;
	printf("\nYour insurance permiun is : %d",insurance);
	remaingsalary=msalary-insurance-loan;
	printf("\nYour Remaing salary is : %d",remaingsalary);
}
