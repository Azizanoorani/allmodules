#include<stdio.h>
main()
{
	int n ,ev=0,od=0,i;
	printf("Enter End Value: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("\nThis Number Is Even",i);
			ev=ev+i;
		}
		else
		{
			printf("\nThis Number is Odd",i);
			od=od+i;
		}
		
	}
	printf("\nSum of Even Number is :%d",ev);
	printf("\nSum of Odd Number is : %d",od);
}
