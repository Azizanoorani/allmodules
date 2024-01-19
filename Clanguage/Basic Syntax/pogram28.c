#include<stdio.h>
main ()
{
   int months, days ,weeks,years;
   printf("Enter years : ") ;
   scanf("%d", &years) ;
   
   months=years*12;
   weeks=months*4;
   days=years*365;
   printf("Months = %d",months);
   printf("\nDays = %d", days);
   printf("\nWeeks = %d", weeks);
   
}
