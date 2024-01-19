//17.Calculate person’s insurance premium based on salary
#include<stdio.h>
int main()
{
 float sum, years, mp;
 float qp, hp, yp;
 
 printf("Enter your Salary:");
 scanf("%d", &sum);
 
 printf("Enter life insurance policy term(in years):");
 scanf("%d", &years);
 
 printf("Your Monthly Premium    : %8.2f\n", sum/(years*12));
 printf("Your Quarterly Premium  : %8.2f\n", sum/(years*4));
 printf("Your Half Yearly Premium: %8.2f\n", sum/(years*2));
}
