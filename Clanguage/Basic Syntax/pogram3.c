#include<stdio.h>
main()
{
	float radius,area ,cf ;
	printf("Enter Radius of circle : ");
	scanf("%f",&radius);
	
	//value of pi is 3.14
	area=3.14*radius*radius;
	printf("The area of circle is : %f",area);
	
	//cf
	cf=2*3.14*radius;
	printf("\nThe cf of circle is : %f",cf);
}
