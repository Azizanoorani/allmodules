#include<stdio.h>
main()
{
	int a,b,temp;
	printf("Enter Number1 : ");
	scanf("%d",&a);
	printf("Enter Number2 : ");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("After swapping value of Number1 : %d",a);
	printf("\nAfter swapping value of Number2 : %d",b);
	
	
}
