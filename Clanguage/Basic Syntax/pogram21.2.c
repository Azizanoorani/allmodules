#include<stdio.h>
main()
{
	int a,b;
	printf("Enter Number1 : ");
	scanf("%d",&a);
	printf("Enter Number2 : ");
	scanf("%d",&b);
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	printf("After swapping value of Number1 : %d",a);
	printf("\nAfter swapping value of Number2 : %d",b);
	
	
}
