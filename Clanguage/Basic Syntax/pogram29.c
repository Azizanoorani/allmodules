#include<stdio.h>
main ()
{
   int mints, seconds ,hours;
   printf("Enter Minutes : ") ;
   scanf("%d", &mints) ;
   
   hours=mints*60;
   seconds=mints*3660;
   printf("Hours = %d",hours);
   printf("\nSeconds = %d",seconds);
   
   
}
